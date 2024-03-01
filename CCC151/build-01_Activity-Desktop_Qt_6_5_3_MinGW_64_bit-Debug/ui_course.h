/********************************************************************************
** Form generated from reading UI file 'course.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE_H
#define UI_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *courseAdd;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(291, 367);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 260, 101, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"/* Example for QPushButton inside the rounded widget */\n"
"QPushButton {\n"
"    background-color: #800000;\n"
"    color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"	 padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"    color: black; \n"
"}\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"    border: 2px solid #2980b9;\n"
"}"));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 211, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(16);
        font1.setBold(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 110, 101, 20));
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
"    color: black; \n"
"}\n"
"\n"
"/* Hover effect for the button */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"    border: 2px solid #2980b9;\n"
"}"));
        courseAdd = new QLineEdit(Form);
        courseAdd->setObjectName("courseAdd");
        courseAdd->setGeometry(QRect(10, 100, 151, 31));
        courseAdd->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 111, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 160, 291, 20));
        comboBox = new QComboBox(Form);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 250, 151, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 230, 111, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: black;"));
        label_5 = new QLabel(Form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 190, 211, 31));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("Form", "      Add a Course", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "Add", nullptr));
        courseAdd->setPlaceholderText(QCoreApplication::translate("Form", "e.g BSCS", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Course Acronym", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "__________________________OR____________________________", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Course Acronym", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "     Delete a Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_H
