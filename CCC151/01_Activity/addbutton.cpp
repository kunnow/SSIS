#include "addbutton.h"
#include "ui_addbutton.h"
#include "mainwindow.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>

AddButton::AddButton(QWidget *parent, MainWindow *mainWindow)
    : QDialog(parent), mainWindow(mainWindow), ui(new Ui::AddButton), rejected(false)
{
    ui->setupUi(this);

    QObject::connect(this, &QDialog::rejected, this, &AddButton::close);

}

bool AddButton::wasRejected() const
{
    return rejected;
}

void AddButton::on_cancelButton_clicked()
{
    rejected = true;
    reject();
}

AddButton::~AddButton()
{
    delete ui;
}

void AddButton::on_pushButton_clicked()
{
    if (ui->lastname->text().isEmpty() ||
        ui->firstname->text().isEmpty() ||
        ui->idnumber->text().isEmpty() ||
        ui->yearlevel->value() == 0)
    {
        QMessageBox::critical(this, "Validation Error", "Please fill out all required fields.");
        return;
    }

    QString Las = ui->lastname->text();
    QString Fir = ui->firstname->text();
    QString Mid = ui->middlename->text();
    QString ID = ui->idnumber->text();
    QString Gen = ui->gender->currentText();
    QString year = QString::number(ui->yearlevel->value());
    QString Cou = ui->course->text().trimmed();

    const QString studentsFilePath = "C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv";
    const QString coursesFilePath = "C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoCourses.csv";

    QFile coursesFile(coursesFilePath);
    if (!coursesFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the courses CSV file for reading.");
        return;
    }

    QTextStream coursesIn(&coursesFile);
    QStringList coursesData;

    while (!coursesIn.atEnd()) {
        QString line = coursesIn.readLine();
        QStringList parts = line.split(',');

        if (parts.size() >= 1) {
            QString courseCode = parts[0].trimmed();
            coursesData.append(courseCode);
        }
    }

    coursesFile.close();

    if (!coursesData.contains(Cou)) {
        QMessageBox::critical(this, "Course not found", "The specified course code does not exist.");
        return;
    }

    QFile studentsFile(studentsFilePath);

    if (!studentsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the CSV file for reading.");
        return;
    }

    QTextStream in(&studentsFile);
    QStringList csvData;

    while (!in.atEnd()) {
        QString line = in.readLine();
        csvData.append(line);
    }

    studentsFile.close();

    QString newData = Las + "," + Fir + "," + Mid + "," + ID + "," + Gen + "," + year + "," + Cou;
    csvData.append(newData);

    if (!studentsFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the CSV file for writing.");
        return;
    }

    QTextStream out(&studentsFile);
    for (const QString &line : csvData) {
        out << line << "\n";
    }

    studentsFile.close();
    close();

    if (mainWindow) {
        mainWindow->loadCSVData(studentsFilePath);
    }

    QMessageBox::information(this, "Data Added", "Data added to the CSV file.");
}
