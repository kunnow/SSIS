#include "addbutton.h"
#include "ui_addbutton.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFile>

AddButton::AddButton(QWidget *parent, MainWindow *mainWindow)
    :QDialog(parent), mainWindow(mainWindow), ui(new Ui::AddButton), rejected(false)
    {
        ui->setupUi(this);
    }

bool AddButton::wasRejected() const
{
    return rejected;
}

void AddButton::on_cancelButton_clicked()
{
    rejected = true;
    reject();  // Reject the dialog
}

AddButton::~AddButton()
{
    delete ui;
}

void AddButton::on_pushButton_clicked()
{
    QString Las = ui->lastname->text();
    QString Fir = ui->firstname->text();
    QString Mid = ui->middlename->text();
    QString ID = ui->idnumber->text();
    QString Gen = ui->gender->currentText();
    QString year = QString::number(ui->yearlevel->value());
    QString Cou = ui->course->text().trimmed();

    QFile studentsFile("C:\\Users\\Shir Keilah\\Documents\\CCC151 - CS\\01_Activity_SSIS\\01_Activity\\01-InfoStudents.csv");

    if (studentsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&studentsFile);

        QStringList csvData;
        while (!in.atEnd())
        {
            QString line = in.readLine();
            csvData.append(line);
        }

        studentsFile.close();

        QString newData = Las + "," + Fir + "," + Mid + "," + ID + "," + Gen + "," + year + "," + Cou;
        csvData.append(newData);

        if (studentsFile.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&studentsFile);
            for (const QString &line : csvData)
            {
                out << line << "\n";
            }

            studentsFile.close();
            close();

            if (mainWindow)
            {
                mainWindow->loadCSVData();
            }

            QMessageBox::information(this, "Data Added", "Data added to the CSV file.");
        }
        else
        {
            QMessageBox::critical(this, "Error", "Unable to open the CSV file for writing.");
            return;
        }
    }
}
