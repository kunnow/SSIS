#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItem>
#include <QMainWindow>
#include <QLineEdit>
#include <QModelIndex>
#include <QSpinBox>
#include <QComboBox>
#include <QPushButton>
#include <QListView>
#include <QStackedWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class System; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QLineEdit *searchLineEdit;
    QLineEdit *lastnameLineEdit;
    QLineEdit *idnumberLineEdit;
    QLineEdit *selectedDataLineEdit;
    QSpinBox *yearlevelSpinBox;
    QComboBox *genderComboBox;
    QLineEdit *firstnameLineEdit;
    QLineEdit *middlenameLineEdit;
    QLineEdit *courseLineEdit;
    QModelIndex selectedIndex;
    QPushButton *EditButton;
    QPushButton *DeleteButton;

public slots:

    void populateCourseComboBox();
     void updateStudentListAfterCourseDeletion(const QString &deletedCourseCode);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_SearchButton_clicked();
    void on_EditButton_clicked();
    void on_SaveButton_clicked();
    void on_DeleteButton_clicked();
    void on_deleteCourseButton_clicked();
    void on_addCourseButton_clicked();

    void on_addCourseButton_2_clicked();

private:
    Ui::System *ui;

    friend class AddButton;
    QStandardItemModel *model;
    QString currentCSVFilePath;

    void loadCSVData(const QString &filePath = "");
    void setWidgetsEditable(bool editable);
    bool editMode;
    QListView* listView = nullptr;
};

#endif // MAINWINDOW_H

