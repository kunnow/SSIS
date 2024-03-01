#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>

#include "addbutton.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
        model = new QStandardItemModel(this);
        ui->tableView->setModel(model);
        model->setHorizontalHeaderLabels({"Last Name", "First Name", "Middle Name", "ID Number", "Gender", "Year Level", "Course"});
    }

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
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

            for (int i = 0; i < rLine.size(); i++)
            {
                QString value = rLine.at(i);
                QStandardItem *item = new QStandardItem(value);

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
    loadCSVData("C:\\Users\\Shir Keilah\\Documents\\CCC151 - CS\\01_Activity_SSIS\\01_Activity\\01-InfoStudents.csv");
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
