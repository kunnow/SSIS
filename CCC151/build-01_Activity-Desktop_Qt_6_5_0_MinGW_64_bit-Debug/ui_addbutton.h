/********************************************************************************
** Form generated from reading UI file 'addbutton.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
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

    void setupUi(QDialog *AddButton)
    {
        if (AddButton->objectName().isEmpty())
            AddButton->setObjectName("AddButton");
        AddButton->resize(291, 321);
        label_2 = new QLabel(AddButton);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 50, 101, 21));
        label_3 = new QLabel(AddButton);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 80, 101, 21));
        label_4 = new QLabel(AddButton);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 110, 101, 21));
        label_5 = new QLabel(AddButton);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 140, 101, 21));
        label_6 = new QLabel(AddButton);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 200, 101, 21));
        label_7 = new QLabel(AddButton);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 170, 101, 21));
        label_8 = new QLabel(AddButton);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 230, 101, 21));
        idnumber = new QLineEdit(AddButton);
        idnumber->setObjectName("idnumber");
        idnumber->setGeometry(QRect(130, 140, 131, 21));
        idnumber->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        course = new QLineEdit(AddButton);
        course->setObjectName("course");
        course->setGeometry(QRect(130, 230, 131, 21));
        lastname = new QLineEdit(AddButton);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(130, 80, 131, 21));
        middlename = new QLineEdit(AddButton);
        middlename->setObjectName("middlename");
        middlename->setGeometry(QRect(130, 110, 131, 21));
        firstname = new QLineEdit(AddButton);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(130, 50, 131, 21));
        gender = new QComboBox(AddButton);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        gender->setGeometry(QRect(130, 170, 131, 21));
        pushButton = new QPushButton(AddButton);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 270, 80, 18));
        yearlevel = new QSpinBox(AddButton);
        yearlevel->setObjectName("yearlevel");
        yearlevel->setGeometry(QRect(130, 200, 131, 21));
        yearlevel->setMinimum(1);
        yearlevel->setMaximum(4);
        label_16 = new QLabel(AddButton);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 10, 231, 20));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_16->setAlignment(Qt::AlignCenter);

        retranslateUi(AddButton);

        QMetaObject::connectSlotsByName(AddButton);
    } // setupUi

    void retranslateUi(QDialog *AddButton)
    {
        AddButton->setWindowTitle(QCoreApplication::translate("AddButton", "Dialog", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class AddButton: public Ui_AddButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBUTTON_H
