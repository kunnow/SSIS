/********************************************************************************
** Form generated from reading UI file 'addbutton.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBUTTON_H
#define UI_ADDBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddButton
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *idnumber;
    QLineEdit *course;
    QLineEdit *lastname;
    QLineEdit *middlename;
    QLineEdit *firstname;
    QComboBox *gender;
    QPushButton *pushButton;
    QSpinBox *yearlevel;
    QLabel *label_16;
    QLabel *label;

    void setupUi(QDialog *AddButton)
    {
        if (AddButton->objectName().isEmpty())
            AddButton->setObjectName("AddButton");
        AddButton->resize(303, 347);
        QFont font;
        font.setBold(true);
        AddButton->setFont(font);
        label_2 = new QLabel(AddButton);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 101, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(AddButton);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 110, 101, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(AddButton);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 150, 101, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(AddButton);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 190, 101, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(AddButton);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 240, 101, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(AddButton);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 190, 101, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(AddButton);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(150, 240, 101, 21));
        label_8->setFont(font1);
        idnumber = new QLineEdit(AddButton);
        idnumber->setObjectName("idnumber");
        idnumber->setGeometry(QRect(30, 210, 101, 21));
        idnumber->setStyleSheet(QString::fromUtf8(""));
        course = new QLineEdit(AddButton);
        course->setObjectName("course");
        course->setGeometry(QRect(150, 260, 111, 21));
        course->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        lastname = new QLineEdit(AddButton);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(30, 130, 231, 21));
        lastname->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        middlename = new QLineEdit(AddButton);
        middlename->setObjectName("middlename");
        middlename->setGeometry(QRect(30, 170, 231, 21));
        middlename->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        firstname = new QLineEdit(AddButton);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(30, 90, 231, 21));
        firstname->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        gender = new QComboBox(AddButton);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        gender->setGeometry(QRect(150, 210, 111, 21));
        gender->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        pushButton = new QPushButton(AddButton);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 300, 80, 18));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        yearlevel = new QSpinBox(AddButton);
        yearlevel->setObjectName("yearlevel");
        yearlevel->setGeometry(QRect(30, 260, 101, 21));
        yearlevel->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        yearlevel->setMinimum(1);
        yearlevel->setMaximum(4);
        label_16 = new QLabel(AddButton);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 30, 231, 31));
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
        label = new QLabel(AddButton);
        label->setObjectName("label");
        label->setGeometry(QRect(-220, -110, 541, 491));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/CSVFiles/Pictures/keilah/Untitled-3.png);"));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        idnumber->raise();
        course->raise();
        lastname->raise();
        middlename->raise();
        firstname->raise();
        gender->raise();
        pushButton->raise();
        yearlevel->raise();
        label_16->raise();

        retranslateUi(AddButton);

        QMetaObject::connectSlotsByName(AddButton);
    } // setupUi

    void retranslateUi(QDialog *AddButton)
    {
        AddButton->setWindowTitle(QCoreApplication::translate("AddButton", "Add Student Profile", nullptr));
        label_2->setText(QCoreApplication::translate("AddButton", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddButton", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("AddButton", "Middle Name", nullptr));
        label_5->setText(QCoreApplication::translate("AddButton", "I.D. Number", nullptr));
        label_6->setText(QCoreApplication::translate("AddButton", "Year Level", nullptr));
        label_7->setText(QCoreApplication::translate("AddButton", "Gender", nullptr));
        label_8->setText(QCoreApplication::translate("AddButton", "Course / Code", nullptr));
        idnumber->setInputMask(QString());
        idnumber->setText(QString());
        idnumber->setPlaceholderText(QCoreApplication::translate("AddButton", "e.g. 2001 - 0001", nullptr));
        course->setText(QString());
        course->setPlaceholderText(QCoreApplication::translate("AddButton", "e.g. BSCA", nullptr));
        gender->setItemText(0, QCoreApplication::translate("AddButton", "Male", nullptr));
        gender->setItemText(1, QCoreApplication::translate("AddButton", "Female", nullptr));

        pushButton->setText(QCoreApplication::translate("AddButton", "Add", nullptr));
        label_16->setText(QCoreApplication::translate("AddButton", "Student Profile", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddButton: public Ui_AddButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBUTTON_H
