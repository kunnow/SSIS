/********************************************************************************
** Form generated from reading UI file 'configcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGCOURSE_H
#define UI_CONFIGCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_configcourse
{
public:
    QLabel *label;
    QComboBox *courseBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *addCourseButton;
    QLineEdit *courseAdd;
    QPushButton *deleteCourseButton;

    void setupUi(QDialog *configcourse)
    {
        if (configcourse->objectName().isEmpty())
            configcourse->setObjectName("configcourse");
        configcourse->resize(285, 372);
        label = new QLabel(configcourse);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 211, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(16);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));
        courseBox = new QComboBox(configcourse);
        courseBox->setObjectName("courseBox");
        courseBox->setGeometry(QRect(10, 260, 151, 31));
        courseBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        label_4 = new QLabel(configcourse);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 240, 111, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: black;"));
        label_5 = new QLabel(configcourse);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 200, 211, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #800000;\n"
"    border-radius: 10px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);\n"
"	color: black;"));
        label_3 = new QLabel(configcourse);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 170, 291, 20));
        label_2 = new QLabel(configcourse);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 111, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        addCourseButton = new QPushButton(configcourse);
        addCourseButton->setObjectName("addCourseButton");
        addCourseButton->setGeometry(QRect(170, 120, 101, 20));
        addCourseButton->setFont(font1);
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
        courseAdd = new QLineEdit(configcourse);
        courseAdd->setObjectName("courseAdd");
        courseAdd->setGeometry(QRect(10, 110, 151, 31));
        courseAdd->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border: 2px solid #000000;\n"
"    border-radius: 5px;\n"
"    padding: 1px;\n"
"    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);"));
        deleteCourseButton = new QPushButton(configcourse);
        deleteCourseButton->setObjectName("deleteCourseButton");
        deleteCourseButton->setGeometry(QRect(170, 270, 101, 24));
        deleteCourseButton->setFont(font1);
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

        retranslateUi(configcourse);

        QMetaObject::connectSlotsByName(configcourse);
    } // setupUi

    void retranslateUi(QDialog *configcourse)
    {
        configcourse->setWindowTitle(QCoreApplication::translate("configcourse", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("configcourse", "      Add a Course", nullptr));
        label_4->setText(QCoreApplication::translate("configcourse", "Course Acronym", nullptr));
        label_5->setText(QCoreApplication::translate("configcourse", "     Delete a Course", nullptr));
        label_3->setText(QCoreApplication::translate("configcourse", "__________________________OR____________________________", nullptr));
        label_2->setText(QCoreApplication::translate("configcourse", "Course Acronym", nullptr));
        addCourseButton->setText(QCoreApplication::translate("configcourse", "Add", nullptr));
        courseAdd->setPlaceholderText(QCoreApplication::translate("configcourse", "e.g BSCS", nullptr));
        deleteCourseButton->setText(QCoreApplication::translate("configcourse", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configcourse: public Ui_configcourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGCOURSE_H
