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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_System
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *EditButton;
    QLabel *label_16;
    QPushButton *SearchButton;
    QLineEdit *searchLine;
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
    QPushButton *SaveButton;
    QPushButton *DeleteButton;
    QLabel *bg;
    QPushButton *addCourseButton;
    QPushButton *deleteCourseButton;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *courseAdd;
    QLabel *label_13;
    QComboBox *courseBox;
    QLabel *border;
    QLabel *profilebg;
    QLabel *profilebc;
    QLabel *profiletb;
    QLabel *label_10;

    void setupUi(QMainWindow *System)
    {
        if (System->objectName().isEmpty())
            System->setObjectName("System");
        System->resize(1288, 714);
        System->setMaximumSize(QSize(1920, 1080));
        System->setMouseTracking(false);
        System->setToolButtonStyle(Qt::ToolButtonTextOnly);
        centralwidget = new QWidget(System);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 1281, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: white;"));
        label->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(390, 120, 841, 521));
        tableView->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1140, 650, 91, 21));
        QFont font;
        font.setBold(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* Example for QPushButton inside the rounded widget */\n"
"QPushButton {\n"
"    background-color: #800000;\n"
"    color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"	 padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"    color: white; \n"
"}\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #944E63;\n"
"    border: 2px solid #944E63;\n"
"}"));
        EditButton = new QPushButton(centralwidget);
        EditButton->setObjectName("EditButton");
        EditButton->setGeometry(QRect(40, 380, 91, 20));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        EditButton->setFont(font1);
        EditButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* Example for QPushButton inside the rounded widget */\n"
"QPushButton {\n"
"    background-color: #800000;\n"
"    color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"	 padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"    color: white; \n"
"}\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #944E63;\n"
"    border: 2px solid #944E63;\n"
"}"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(90, 80, 211, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell")});
        font2.setPointSize(16);
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));
        label_16->setAlignment(Qt::AlignCenter);
        SearchButton = new QPushButton(centralwidget);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(1150, 90, 80, 21));
        SearchButton->setFont(font);
        SearchButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* Example for QPushButton inside the rounded widget */\n"
"QPushButton {\n"
"    background-color: #800000;\n"
"    color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"	 padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"    color: white; \n"
"}\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #944E63;\n"
"    border: 2px solid #944E63;\n"
"}"));
        searchLine = new QLineEdit(centralwidget);
        searchLine->setObjectName("searchLine");
        searchLine->setGeometry(QRect(390, 90, 751, 21));
        searchLine->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 220, 101, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Rockwell")});
        font3.setBold(true);
        label_4->setFont(font3);
        firstname = new QLineEdit(centralwidget);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(40, 140, 301, 21));
        firstname->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 320, 101, 21));
        label_8->setFont(font3);
        yearlevel = new QSpinBox(centralwidget);
        yearlevel->setObjectName("yearlevel");
        yearlevel->setGeometry(QRect(200, 340, 141, 21));
        yearlevel->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        yearlevel->setMinimum(1);
        yearlevel->setMaximum(4);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 170, 101, 21));
        label_3->setFont(font3);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 270, 101, 21));
        label_5->setFont(font3);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 120, 101, 21));
        label_2->setFont(font3);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 320, 101, 21));
        label_6->setFont(font3);
        course = new QLineEdit(centralwidget);
        course->setObjectName("course");
        course->setGeometry(QRect(40, 340, 141, 21));
        course->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        lastname = new QLineEdit(centralwidget);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(40, 190, 301, 21));
        lastname->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        idnumber = new QLineEdit(centralwidget);
        idnumber->setObjectName("idnumber");
        idnumber->setGeometry(QRect(200, 290, 141, 21));
        idnumber->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        gender = new QComboBox(centralwidget);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        gender->setGeometry(QRect(40, 290, 141, 21));
        gender->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 270, 101, 21));
        label_7->setFont(font3);
        middlename = new QLineEdit(centralwidget);
        middlename->setObjectName("middlename");
        middlename->setGeometry(QRect(40, 240, 301, 21));
        middlename->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        SaveButton = new QPushButton(centralwidget);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setGeometry(QRect(260, 380, 91, 20));
        SaveButton->setFont(font);
        SaveButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #808080;\n"
"    border: 2px solid #2980b9;\n"
"}"));
        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setGeometry(QRect(150, 380, 91, 20));
        DeleteButton->setFont(font);
        DeleteButton->setStyleSheet(QString::fromUtf8("\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #808080;\n"
"    border: 2px solid #2980b9;\n"
"}"));
        bg = new QLabel(centralwidget);
        bg->setObjectName("bg");
        bg->setGeometry(QRect(0, -70, 1291, 111));
        bg->setStyleSheet(QString::fromUtf8("background-image: url(:/CSVFiles/Pictures/keilah/bg.jpg);"));
        bg->setScaledContents(true);
        addCourseButton = new QPushButton(centralwidget);
        addCourseButton->setObjectName("addCourseButton");
        addCourseButton->setGeometry(QRect(230, 510, 101, 20));
        addCourseButton->setFont(font3);
        addCourseButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* Example for QPushButton inside the rounded widget */\n"
"QPushButton {\n"
"    background-color: #800000;\n"
"    color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"	 padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"    color: white; \n"
"}\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #944E63;\n"
"    border: 2px solid #944E63;\n"
"}"));
        deleteCourseButton = new QPushButton(centralwidget);
        deleteCourseButton->setObjectName("deleteCourseButton");
        deleteCourseButton->setGeometry(QRect(230, 650, 101, 21));
        deleteCourseButton->setFont(font3);
        deleteCourseButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* Example for QPushButton inside the rounded widget */\n"
"QPushButton {\n"
"    background-color: #800000;\n"
"    color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"	 padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"    color: white; \n"
"}\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #944E63;\n"
"    border: 2px solid #944E63;\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(90, 450, 211, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell")});
        font4.setPointSize(16);
        font4.setBold(false);
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 620, 111, 21));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: black;"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(90, 580, 211, 31));
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));
        courseAdd = new QLineEdit(centralwidget);
        courseAdd->setObjectName("courseAdd");
        courseAdd->setGeometry(QRect(50, 500, 151, 31));
        courseAdd->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 480, 111, 21));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: black;"));
        courseBox = new QComboBox(centralwidget);
        courseBox->setObjectName("courseBox");
        courseBox->setGeometry(QRect(50, 640, 151, 31));
        courseBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        border = new QLabel(centralwidget);
        border->setObjectName("border");
        border->setGeometry(QRect(10, 50, 1261, 651));
        border->setStyleSheet(QString::fromUtf8("border: 3px solid #000000;\n"
"    border-radius: 15px;\n"
"	 padding: 20px;"));
        profilebg = new QLabel(centralwidget);
        profilebg->setObjectName("profilebg");
        profilebg->setGeometry(QRect(10, 60, 361, 371));
        profilebg->setStyleSheet(QString::fromUtf8("background-image: url(:/CSVFiles/Pictures/keilah/bgpf.png);"));
        profilebg->setScaledContents(true);
        profilebg->setWordWrap(false);
        profilebc = new QLabel(centralwidget);
        profilebc->setObjectName("profilebc");
        profilebc->setGeometry(QRect(10, 430, 361, 261));
        profilebc->setStyleSheet(QString::fromUtf8("background-image: url(:/CSVFiles/Pictures/keilah/pfbc.png);"));
        profiletb = new QLabel(centralwidget);
        profiletb->setObjectName("profiletb");
        profiletb->setGeometry(QRect(370, 60, 901, 631));
        profiletb->setStyleSheet(QString::fromUtf8("background-image: url(:/CSVFiles/Pictures/keilah/tbprofile.png);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 550, 341, 16));
        label_10->setFont(font);
        System->setCentralWidget(centralwidget);
        profiletb->raise();
        profilebc->raise();
        profilebg->raise();
        border->raise();
        bg->raise();
        label->raise();
        tableView->raise();
        pushButton_2->raise();
        EditButton->raise();
        label_16->raise();
        SearchButton->raise();
        searchLine->raise();
        label_4->raise();
        firstname->raise();
        label_8->raise();
        yearlevel->raise();
        label_3->raise();
        label_5->raise();
        label_2->raise();
        label_6->raise();
        course->raise();
        lastname->raise();
        idnumber->raise();
        gender->raise();
        label_7->raise();
        middlename->raise();
        SaveButton->raise();
        DeleteButton->raise();
        addCourseButton->raise();
        deleteCourseButton->raise();
        label_9->raise();
        label_11->raise();
        label_12->raise();
        courseAdd->raise();
        label_13->raise();
        courseBox->raise();
        label_10->raise();

        retranslateUi(System);

        QMetaObject::connectSlotsByName(System);
    } // setupUi

    void retranslateUi(QMainWindow *System)
    {
        System->setWindowTitle(QCoreApplication::translate("System", "SSIS", nullptr));
        label->setText(QCoreApplication::translate("System", "SIMPLE STUDENT INFORMATION SYSTEM", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("System", "<html><head/><body><p>QPushButton {</p><p>    background-color: #FFBE98;</p><p>    border: 2px solid #E2BFB3;</p><p>    color: #FEECE2;</p><p>    padding: 12px 24px; /* Increased padding */</p><p>    border-radius: 5px;</p><p>    font-size: 14px;</p><p>}</p><p><br/></p><p>QPushButton:hover {</p><p>    background-color: #F7DED0;</p><p>    border-color: #FEECE2;</p><p>}</p><p><br/></p><p>QPushButton:pressed {</p><p>    background-color: #E2BFB3;</p><p>    border-color: #FFBE98;</p><p>}</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("System", "Add", nullptr));
        EditButton->setText(QCoreApplication::translate("System", "Edit", nullptr));
        label_16->setText(QCoreApplication::translate("System", "Student Profile", nullptr));
        SearchButton->setText(QCoreApplication::translate("System", "Search", nullptr));
        searchLine->setPlaceholderText(QCoreApplication::translate("System", "Enter I.D. Number or Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("System", "Middle Name", nullptr));
        label_8->setText(QCoreApplication::translate("System", "Course / Code", nullptr));
        label_3->setText(QCoreApplication::translate("System", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("System", "I.D. Number", nullptr));
        label_2->setText(QCoreApplication::translate("System", "First Name", nullptr));
        label_6->setText(QCoreApplication::translate("System", "Year Level", nullptr));
        course->setText(QString());
        course->setPlaceholderText(QCoreApplication::translate("System", "e.g. BSCA", nullptr));
        idnumber->setInputMask(QString());
        idnumber->setText(QString());
        idnumber->setPlaceholderText(QCoreApplication::translate("System", "e.g. 2001 - 0001", nullptr));
        gender->setItemText(0, QCoreApplication::translate("System", "Male", nullptr));
        gender->setItemText(1, QCoreApplication::translate("System", "Female", nullptr));

        label_7->setText(QCoreApplication::translate("System", "Gender", nullptr));
        SaveButton->setText(QCoreApplication::translate("System", "Save", nullptr));
        DeleteButton->setText(QCoreApplication::translate("System", "Delete", nullptr));
        bg->setText(QString());
        addCourseButton->setText(QCoreApplication::translate("System", "Add", nullptr));
        deleteCourseButton->setText(QCoreApplication::translate("System", "Delete", nullptr));
        label_9->setText(QCoreApplication::translate("System", "       Add a Course", nullptr));
        label_11->setText(QCoreApplication::translate("System", "Course Acronym", nullptr));
        label_12->setText(QCoreApplication::translate("System", "     Delete a Course", nullptr));
        courseAdd->setPlaceholderText(QCoreApplication::translate("System", "e.g BSCS", nullptr));
        label_13->setText(QCoreApplication::translate("System", "Course Acronym", nullptr));
        border->setText(QString());
        profilebg->setText(QString());
        profilebc->setText(QString());
        profiletb->setText(QString());
        label_10->setText(QCoreApplication::translate("System", "___________________________________________________________________", nullptr));
    } // retranslateUi

};

namespace Ui {
    class System: public Ui_System {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
