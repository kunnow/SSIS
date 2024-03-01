/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_16;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QFrame *line_4;
    QLabel *label_4;
    QLineEdit *firstname;
    QLabel *label_8;
    QSpinBox *yearlevel;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *course;
    QLineEdit *lastname;
    QLineEdit *idnumber;
    QComboBox *gender;
    QLabel *label_7;
    QLineEdit *middlename;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(851, 550);
        MainWindow->setMaximumSize(QSize(1290, 1080));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 811, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(280, 80, 541, 421));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 480, 80, 18));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 480, 80, 18));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 480, 80, 18));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 70, 231, 20));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_16->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 30, 811, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 500, 811, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(10, 40, 20, 471));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(740, 50, 80, 18));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(280, 50, 451, 18));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(820, 40, 20, 471));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 170, 101, 21));
        firstname = new QLineEdit(centralwidget);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(130, 110, 141, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 290, 101, 21));
        yearlevel = new QSpinBox(centralwidget);
        yearlevel->setObjectName("yearlevel");
        yearlevel->setGeometry(QRect(130, 260, 141, 21));
        yearlevel->setMinimum(1);
        yearlevel->setMaximum(4);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 101, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 200, 101, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 101, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 260, 101, 21));
        course = new QLineEdit(centralwidget);
        course->setObjectName("course");
        course->setGeometry(QRect(130, 290, 141, 21));
        lastname = new QLineEdit(centralwidget);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(130, 140, 141, 21));
        idnumber = new QLineEdit(centralwidget);
        idnumber->setObjectName("idnumber");
        idnumber->setGeometry(QRect(130, 200, 141, 21));
        idnumber->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        gender = new QComboBox(centralwidget);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        gender->setGeometry(QRect(130, 230, 141, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 230, 101, 21));
        middlename = new QLineEdit(centralwidget);
        middlename->setObjectName("middlename");
        middlename->setGeometry(QRect(130, 170, 141, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 851, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SIMPLE STUDENT INFORMATION SYSTEM", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Student Profile", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter I.D. Number or Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Middle Name", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Course / Code", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "I.D. Number", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Year Level", nullptr));
        course->setText(QString());
        course->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g. BSCA", nullptr));
        idnumber->setInputMask(QString());
        idnumber->setText(QString());
        idnumber->setPlaceholderText(QCoreApplication::translate("MainWindow", "e.g. 2001 - 0001", nullptr));
        gender->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        gender->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
