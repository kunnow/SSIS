#ifndef ADDBUTTON_H
#define ADDBUTTON_H

#include <QDialog>
#include <QStringList>

class MainWindow;

namespace Ui {
class AddButton;
}

class AddButton : public QDialog
{
    Q_OBJECT

public:
    explicit AddButton(QWidget *parent = nullptr, MainWindow *mainWindow = nullptr);
    ~AddButton();

    bool wasRejected() const;
    void on_cancelButton_clicked();

private slots:
    void on_pushButton_clicked();

private:
    MainWindow *mainWindow;
    Ui::AddButton *ui;
    QStringList csvData;
    QString Las, Fir, Mid, ID, Gen, year, Cou;
    bool rejected;

signals:
    void dataAdded();
};

#endif // ADDBUTTON_H
