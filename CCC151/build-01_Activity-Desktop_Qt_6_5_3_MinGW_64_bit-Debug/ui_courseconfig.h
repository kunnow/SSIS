/********************************************************************************
** Form generated from reading UI file 'courseconfig.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSECONFIG_H
#define UI_COURSECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_courseconfig
{
public:
    QPushButton *deleteCourseButton;
    QLabel *label_3;
    QLineEdit *courseAdd;
    QLabel *label_2;
    QComboBox *courseBox;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *addCourseButton;
    QLabel *label;

    void setupUi(QDialog *courseconfig)
    {
        if (courseconfig->objectName().isEmpty())
            courseconfig->setObjectName("courseconfig");
        courseconfig->resize(289, 364);
        deleteCourseButton = new QPushButton(courseconfig);
        deleteCourseButton->setObjectName("deleteCourseButton");
        deleteCourseButton->setGeometry(QRect(170, 260, 101, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setBold(true);
        deleteCourseButton->setFont(font);
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
"    background-color: #808080;\n"
"    border: 2px solid #2980b9;\n"
"}"));
        label_3 = new QLabel(courseconfig);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 160, 291, 20));
        courseAdd = new QLineEdit(courseconfig);
        courseAdd->setObjectName("courseAdd");
        courseAdd->setGeometry(QRect(10, 100, 151, 31));
        courseAdd->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_2 = new QLabel(courseconfig);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 111, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        courseBox = new QComboBox(courseconfig);
        courseBox->setObjectName("courseBox");
        courseBox->setGeometry(QRect(10, 250, 151, 31));
        courseBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_5 = new QLabel(courseconfig);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 190, 211, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(16);
        font1.setBold(false);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));
        label_4 = new QLabel(courseconfig);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 230, 111, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: black;"));
        addCourseButton = new QPushButton(courseconfig);
        addCourseButton->setObjectName("addCourseButton");
        addCourseButton->setGeometry(QRect(170, 110, 101, 20));
        addCourseButton->setFont(font);
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
"    background-color: #808080;\n"
"    border: 2px solid #2980b9;\n"
"}"));
        label = new QLabel(courseconfig);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 211, 31));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));

        retranslateUi(courseconfig);

        QMetaObject::connectSlotsByName(courseconfig);
    } // setupUi

    void retranslateUi(QDialog *courseconfig)
    {
        courseconfig->setWindowTitle(QCoreApplication::translate("courseconfig", "Dialog", nullptr));
        deleteCourseButton->setText(QCoreApplication::translate("courseconfig", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("courseconfig", "__________________________OR____________________________", nullptr));
        courseAdd->setPlaceholderText(QCoreApplication::translate("courseconfig", "e.g BSCS", nullptr));
        label_2->setText(QCoreApplication::translate("courseconfig", "Course Acronym", nullptr));
        label_5->setText(QCoreApplication::translate("courseconfig", "     Delete a Course", nullptr));
        label_4->setText(QCoreApplication::translate("courseconfig", "Course Acronym", nullptr));
        addCourseButton->setText(QCoreApplication::translate("courseconfig", "Add", nullptr));
        label->setText(QCoreApplication::translate("courseconfig", "      Add a Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class courseconfig: public Ui_courseconfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSECONFIG_H
