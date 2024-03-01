#ifndef COURSECONFIG_H
#define COURSECONFIG_H

#include <QDialog>

namespace Ui {
class courseconfig;
}

class courseconfig : public QDialog
{
    Q_OBJECT

public:
    explicit courseconfig(QWidget *parent = nullptr);
    ~courseconfig();
public slots:


private slots:
    void on_deleteCourseButton_clicked();

private:
    Ui::courseconfig *ui;
    void updateTableAfterCourseDeletion();
signals:
    void courseDeleted();
};

#endif // COURSECONFIG_H
