
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QModelIndex>
#include <QStandardItem>
#include <QLineEdit>
#include <QSpinBox>
#include <QComboBox>
#include <QPushButton>
#include <QListView>

#include "addbutton.h"
#include "addbutton.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::System)
{
    ui->setupUi(this);
    this->setStyleSheet("QMainWindow::title { background-color: #808080; }");
    setFixedSize(size());
    model = new QStandardItemModel(this);
    ui->tableView->setModel(model);
    ui->SaveButton->setDisabled(true);
    model->setHorizontalHeaderLabels({"Last Name", "First Name", "Middle Name", "ID Number", "Gender", "Year Level", "Course"});
    ui->DeleteButton->setEnabled(false);
    loadCSVData("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv");
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    searchLineEdit = ui->searchLine;
    lastnameLineEdit = ui->lastname;
    idnumberLineEdit = ui->idnumber;
    selectedDataLineEdit = ui->lastname;
    yearlevelSpinBox = ui->yearlevel;
    genderComboBox = ui->gender;
    firstnameLineEdit = ui->firstname;
    middlenameLineEdit = ui->middlename;
    courseLineEdit = ui->course;
    setWidgetsEditable(false);
    populateCourseComboBox();

    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::on_pushButton_2_clicked);
    connect(ui->SearchButton, &QPushButton::clicked, this, &MainWindow::on_SearchButton_clicked);
    connect(ui->EditButton, &QPushButton::clicked, this, &MainWindow::on_EditButton_clicked);
    connect(ui->SaveButton, &QPushButton::clicked, this, &MainWindow::on_SaveButton_clicked);
    connect(ui->DeleteButton, &QPushButton::clicked, this, &MainWindow::on_DeleteButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
}

void MainWindow::setWidgetsEditable(bool editable)
{
    lastnameLineEdit->setReadOnly(!editable);
    firstnameLineEdit->setReadOnly(!editable);
    middlenameLineEdit->setReadOnly(!editable);
    idnumberLineEdit->setReadOnly(!editable);
    genderComboBox->setDisabled(!editable);
    yearlevelSpinBox->setReadOnly(!editable);
    courseLineEdit->setReadOnly(!editable);
}

void MainWindow::loadCSVData(const QString &filePath)
{
    model->clear();

    currentCSVFilePath = filePath;

    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream in(&file);
        int row = 0;
        while (!in.atEnd())
        {
            QString value = in.readLine();
            QStringList rLine = value.split(',');

            model->appendRow({});

            for (int i = 0; i < rLine.size(); i++)
            {
                QString value = rLine.at(i);
                QStandardItem *item = new QStandardItem(value);

                item->setFlags(item->flags() & ~Qt::ItemIsEditable);

                model->setItem(row, i, item);
            }
            row++;
        }
        file.close();
    }
    model->setHorizontalHeaderLabels({"Last Name", "First Name", "Middle Name", "ID Number", "Gender", "Year Level", "Course"});
}

void MainWindow::on_pushButton_clicked()
{
    loadCSVData("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv");
}

void MainWindow::on_pushButton_2_clicked()
{
    AddButton *addbutton = new AddButton(this);
    addbutton->exec();

    if (!addbutton->wasRejected())
    {
        loadCSVData(currentCSVFilePath);
    }
    delete addbutton;
}

void MainWindow::on_SearchButton_clicked()
{
    QString searchName = searchLineEdit->text();

    QModelIndexList matchesLastName = model->match(model->index(0, 0), Qt::DisplayRole, QVariant::fromValue(searchName), -1, Qt::MatchContains);
    QModelIndexList matchesIDNumber = model->match(model->index(0, 3), Qt::DisplayRole, QVariant::fromValue(searchName), -1, Qt::MatchContains);

    QModelIndexList matches = matchesLastName + matchesIDNumber;

    if (!matches.isEmpty())
    {

        ui->DeleteButton->setEnabled(true);
        ui->DeleteButton->setStyleSheet("QPushButton { background-color: #800000; color: white; border: 2px solid #000000; border-radius: 5px; padding: 1px; box-shadow: 0 0 10px rgba(0, 0, 0, 0.5); color: white; } QPushButton:hover { background-color: #944E63; border: 2px solid #944E63; }");

        QStandardItemModel* listModel = new QStandardItemModel(this);

        for (const QModelIndex& match : matches)
        {
            QString lastName = model->data(model->index(match.row(), 0), Qt::DisplayRole).toString();
            QString firstName = model->data(model->index(match.row(), 1), Qt::DisplayRole).toString();
            QString idNumber = model->data(model->index(match.row(), 3), Qt::DisplayRole).toString();
            QString fullName = lastName + ", " + firstName + "     " + idNumber;
            QStandardItem* item = new QStandardItem(fullName);
            listModel->appendRow(item);
        }

        if (listView)
        {
            delete listView;
        }

        listView = new QListView(this);
        listView->setModel(listModel);

        listView->setGeometry(searchLineEdit->geometry().left(), searchLineEdit->geometry().bottom(), searchLineEdit->geometry().width(), 100);
        listView->show();

        connect(listView, &QListView::clicked, [=](const QModelIndex& index) {

            QModelIndex selectedModelIndex = matches.at(index.row());

            selectedIndex = selectedModelIndex;

            for (int i = 0; i < model->columnCount(); ++i)
            {
                QModelIndex index = model->index(selectedModelIndex.row(), i);
                QString value = index.data(Qt::DisplayRole).toString();

                switch (i)
                {
                case 0:
                    lastnameLineEdit->setText(value);
                    break;
                case 1:
                    firstnameLineEdit->setText(value);
                    break;
                case 2:
                    middlenameLineEdit->setText(value);
                    break;
                case 3:
                    idnumberLineEdit->setText(value);
                    break;
                case 4:
                    genderComboBox->setCurrentText(value);
                    break;
                case 5:
                    yearlevelSpinBox->setValue(value.toInt());
                    break;
                case 6:
                    courseLineEdit->setText(value);
                    break;
                default:
                    break;
                }
            }
            listView->hide();
            listView->deleteLater();
            listView = nullptr;
        });
    }
    else
    {
        lastnameLineEdit->clear();
        firstnameLineEdit->clear();
        middlenameLineEdit->clear();
        idnumberLineEdit->clear();
        genderComboBox->setCurrentIndex(0);
        yearlevelSpinBox->setValue(0);
        courseLineEdit->clear();
        ui->DeleteButton->setEnabled(false);
        ui->DeleteButton->setStyleSheet("color: gray");
        QMessageBox::information(this,"Search Result", "No matching data found.");
    }
}

void MainWindow::on_EditButton_clicked()
{
    if (selectedIndex.isValid())
    {
        if (!editMode)
        {
            editMode = true;
            setWidgetsEditable(true);

            ui->SaveButton->setEnabled(true);
            ui->SaveButton->setStyleSheet("QPushButton { background-color: #800000; color: white; border: 2px solid #000000; border-radius: 5px; padding: 1px; box-shadow: 0 0 10px rgba(0, 0, 0, 0.5); color: white; } QPushButton:hover { background-color: #944E63; border: 2px solid #944E63; }");
        }
    }
    else if (!editMode)
    {
        QMessageBox::warning(this, "Edit Error", "Please search for a record before attempting to edit.");
    }
}

void MainWindow::on_SaveButton_clicked()
{
    if (editMode && selectedIndex.isValid())
    {
        QString Las = lastnameLineEdit->text();
        QString Fir = firstnameLineEdit->text();
        QString Mid = middlenameLineEdit->text();
        QString ID = idnumberLineEdit->text();
        QString Gen = genderComboBox->currentText();
        QString year = QString::number(yearlevelSpinBox->value());
        QString Cou = courseLineEdit->text();

        static const QRegularExpression idRegex("^\\d{4}-\\d{4}$");

        if (!idRegex.match(ID).hasMatch())
        {
            QMessageBox::critical(this, "ID Format Error", "Please enter the correct ID number format");
            return;
        }

        const QString coursesFilePath = "C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoCourses.csv";

        QFile coursesFile(coursesFilePath);
        if (!coursesFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox::critical(this, "Error", "Unable to open the courses CSV file for reading.");
            return;
        }

        QTextStream coursesIn(&coursesFile);
        QStringList coursesData;

        while (!coursesIn.atEnd())
        {
            QString line = coursesIn.readLine();
            QStringList parts = line.split(',');

            if (parts.size() >= 1)
            {
                QString courseCode = parts[0].trimmed();
                coursesData.append(courseCode);
            }
        }

        coursesFile.close();

        if (!coursesData.contains(Cou))
        {
            QMessageBox::critical(this, "Course not found", "The specified course code does not exist.");
            return;
        }

        QFile studentsFile(currentCSVFilePath);
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

            for (int i = 0; i < csvData.size(); ++i) {
                QStringList parts = csvData[i].split(',');
                if (i != selectedIndex.row() && parts.size() >= 4 && parts[3].trimmed() == ID) {
                    QMessageBox::critical(this, "ID already exists", "The specified ID number already exists.");
                    studentsFile.close();
                    return;
                }
            }

            QString updatedData = Las + "," + Fir + "," + Mid + "," + ID + "," + Gen + "," + year + "," + Cou;
            csvData[selectedIndex.row()] = updatedData;

            if (studentsFile.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QTextStream out(&studentsFile);
                for (const QString &line : csvData)
                {
                    out << line << "\n";
                }
                studentsFile.close();

                model->clear();
                loadCSVData(currentCSVFilePath);

                ui->SaveButton->setDisabled(true);
                ui->SaveButton->setStyleSheet("color: gray;");

                setWidgetsEditable(false);
                editMode = false;
                QMessageBox::information(this, "Data Updated", "Data updated in the CSV file.");
            }
            else
            {
                QMessageBox::warning(this, "Save Error", "No data selected for saving.");
            }
        }
    }
}

void MainWindow::on_DeleteButton_clicked()
{
    {
        if (selectedIndex.isValid())
        {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this data?",
                                          QMessageBox::Yes | QMessageBox::No);
            if (reply == QMessageBox::Yes)
            {
                model->removeRow(selectedIndex.row());

                QFile studentsFile("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv");
                if (studentsFile.open(QIODevice::WriteOnly | QIODevice::Text))
                {
                    QTextStream out(&studentsFile);
                    for (int row = 0; row < model->rowCount(); ++row)
                    {
                        QStringList rowData;
                        for (int col = 0; col < model->columnCount(); ++col)
                        {
                            QModelIndex index = model->index(row, col);
                            QString value = index.data(Qt::DisplayRole).toString();
                            rowData << value;
                        }
                        out << rowData.join(",") << "\n";
                    }
                    studentsFile.close();

                    lastnameLineEdit->clear();
                    firstnameLineEdit->clear();
                    middlenameLineEdit->clear();
                    idnumberLineEdit->clear();
                    genderComboBox->setCurrentIndex(0);
                    yearlevelSpinBox->setValue(0);
                    courseLineEdit->clear();

                    selectedIndex = QModelIndex();

                    ui->DeleteButton->setEnabled(false);
                    ui->DeleteButton->setStyleSheet("color: gray;");

                    QMessageBox::information(this, "Delete", "Data deleted from the table.");
                   loadCSVData("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv");

                }
                else
                {
                    QMessageBox::warning(this, "Delete Error", "No data selected for deletion.");
                }
            }
        }
    }
}

void MainWindow::on_deleteCourseButton_clicked()
{
    QString deletedCourseCode = ui->courseBox->currentText();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Course", "Do you want to delete this course? This will also delete students enrolled in this course.",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No) {
        return;
    }

    QFile coursesFile("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoCourses.csv");
    if (!coursesFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the courses CSV file for reading.");
        return;
    }

    QStringList updatedCourses;
    QTextStream in(&coursesFile);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');

        if (parts.size() >= 2) {
            QString courseCode = parts[0].trimmed();
            if (courseCode != deletedCourseCode) {
                updatedCourses << line;
            }
        }
    }

    coursesFile.close();

    if (!coursesFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the courses CSV file for writing.");
        return;
    }

    QTextStream out(&coursesFile);
    for (const QString &line : updatedCourses) {
        out << line << "\n";
    }

    coursesFile.close();
    populateCourseComboBox();
    updateStudentListAfterCourseDeletion(deletedCourseCode);

    QMessageBox::information(this, "Course Deleted", "Course deleted from the courses CSV file. Students enrolled in this course are also deleted.");

    updateStudentListAfterCourseDeletion(deletedCourseCode);

    loadCSVData("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv");
}

void MainWindow::on_addCourseButton_clicked()
{
    QString newCourseCode1 = ui->courseAdd->text().trimmed();
    QString newCourseCode2 = ui->courseAdd_2->text().trimmed();

    if (newCourseCode1.isEmpty() || newCourseCode2.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter a valid course code.");
        return;
    }

    QFile coursesFile("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoCourses.csv");
    if (coursesFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&coursesFile);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(',');

            if (parts.size() >= 2) {
                QString courseCode1 = parts[0].trimmed();
                QString courseCode2 = parts[1].trimmed();

                if (courseCode1 == newCourseCode1 && courseCode2 == newCourseCode2) {
                    QMessageBox::warning(this, "Error", "Course already exists.");
                    coursesFile.close();
                    return;
                }
            }
        }
        coursesFile.close();
    } else {
        QMessageBox::critical(this, "Error", "Unable to open the courses CSV file for reading.");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Add Course", "Do you want to add this course?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No) {
        return;
    }

    if (!coursesFile.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the courses CSV file for writing.");
        return;
    }

    QTextStream out(&coursesFile);
    out << newCourseCode1 << "," << newCourseCode2 << "\n";

    coursesFile.close();
    ui->courseAdd->clear();
    ui->courseAdd_2->clear();
    populateCourseComboBox();

    QMessageBox::information(this, "Course Added", "Course added to the courses CSV file.");

    loadCSVData("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv");
}

void MainWindow::populateCourseComboBox()
{
    ui->courseBox->clear();

    QFile coursesFile("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoCourses.csv");
    if (coursesFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&coursesFile);

        in.readLine();

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(',');

            if (parts.size() >= 2) {
                QString courseCode = parts[0].trimmed();
                QString courseName = parts[1].trimmed();

                ui->courseBox->addItem(courseCode);
            }
        }
        coursesFile.close();
    }
    updateStudentListAfterCourseDeletion(ui->courseBox->currentText());
}

void MainWindow::updateStudentListAfterCourseDeletion(const QString &deletedCourseCode)
{
    QFile studentsFile("C:\\Users\\Shir Keilah\\Documents\\SSIS\\CCC151\\01_Activity\\01-InfoStudents.csv");
    if (!studentsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the students CSV file for reading.");
        return;
    }

    QStringList updatedStudents;
    QTextStream in(&studentsFile);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');

        if (parts.size() >= 7) {
            QString studentCourseCode = parts[6].trimmed();
            if (studentCourseCode != deletedCourseCode) {
                updatedStudents << line;
            }
        }
    }

    studentsFile.close();

    if (!studentsFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open the students CSV file for writing.");
        return;
    }

    QTextStream out(&studentsFile);
    for (const QString &line : updatedStudents) {
        out << line << "\n";
    }
    studentsFile.close();
}

void MainWindow::on_addCourseButton_2_clicked()
{

}

