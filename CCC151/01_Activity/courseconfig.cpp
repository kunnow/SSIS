#include "courseconfig.h"
#include "mainwindow.h"
#include "ui_courseconfig.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

courseconfig::courseconfig(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::courseconfig)
{
    ui->setupUi(this);

    MainWindow *mainWindow = qobject_cast<MainWindow *>(parent);


    QFile coursesFile("C:\\Users\\aclao\\Documents\\school\\2nd Year SEM2\\keilah\\CCC151\\01_Activity\\01-InfoCourses.csv");


    if (coursesFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&coursesFile);
        QStringList courseCodes;

        // Skip the header row
        in.readLine();

        // Assuming that "Course Code" is the first column and "Course Name" is the second column
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(',');

            // Ensure the line has enough columns
            if (parts.size() >= 2) {
                QString courseCode = parts[0].trimmed();
                QString courseName = parts[1].trimmed();

                // Add the course code to the combo box, and you can add courseName to a map or another data structure if needed
                ui->courseBox->addItem(courseCode);
            }
        }

        coursesFile.close();
    }
}
courseconfig::~courseconfig()
{
    delete ui;
}

void courseconfig::on_deleteCourseButton_clicked()
{
    QString selectedCourseCode = ui->courseBox->currentText();

    // Show a confirmation dialog
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this course?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // Update InfoCourses.csv - Remove the course entry
        QString coursesFilePath = "C:\\Users\\aclao\\Documents\\school\\2nd Year SEM2\\keilah\\CCC151\\01_Activity\\01-InfoCourses.csv";
        QStringList newCoursesContent;

        QFile coursesFile(coursesFilePath);
        if (coursesFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&coursesFile);

            // Read and skip the header
            newCoursesContent << in.readLine();

            // Iterate through existing courses and add them to the new content, excluding the one to be deleted
            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList parts = line.split(',');

                if (parts.size() >= 2) {
                    QString courseCode = parts[0].trimmed();

                    if (courseCode != selectedCourseCode) {
                        newCoursesContent << line;
                    }
                }
            }

            coursesFile.close();

            // Write the new content to a temporary file
            QFile tempFile(coursesFilePath + ".temp");
            if (tempFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&tempFile);
                for (const QString &line : newCoursesContent) {
                    out << line << "\n";
                }

                tempFile.close();

                // Replace the original file with the temporary file
                if (QFile::remove(coursesFilePath) && QFile::rename(coursesFilePath + ".temp", coursesFilePath)) {
                    // The file has been successfully replaced
                } else {
                    QMessageBox::warning(this, "Error", "Failed to replace the InfoCourses.csv file.");
                }
            } else {
                QMessageBox::warning(this, "Error", "Failed to create the temporary file for InfoCourses.csv.");
            }
        } else {
            QMessageBox::warning(this, "Error", "Failed to open InfoCourses.csv for reading.");
        }

        // Update InfoStudents.csv - Remove students enrolled in the deleted course
        QString studentsFilePath = "C:\\Users\\aclao\\Documents\\school\\2nd Year SEM2\\keilah\\CCC151\\01_Activity\\01-InfoStudents.csv";
        QStringList newStudentsContent;

        QFile studentsFile(studentsFilePath);
        if (studentsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&studentsFile);

            // Read and skip the header
            newStudentsContent << in.readLine();

            // Iterate through existing students and add them to the new content, excluding those enrolled in the deleted course
            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList parts = line.split(',');

                if (parts.size() >= 7) {
                    QString studentCourse = parts[6].trimmed();

                    if (studentCourse != selectedCourseCode) {
                        newStudentsContent << line;
                    }
                }
            }

            studentsFile.close();

            // Write the new content to a temporary file
            QFile tempFile(studentsFilePath + ".temp");
            if (tempFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&tempFile);
                for (const QString &line : newStudentsContent) {
                    out << line << "\n";
                }

                tempFile.close();

                // Replace the original file with the temporary file
                if (QFile::remove(studentsFilePath) && QFile::rename(studentsFilePath + ".temp", studentsFilePath)) {
                    // The file has been successfully replaced
                } else {
                    QMessageBox::warning(this, "Error", "Failed to replace the InfoStudents.csv file.");
                }
            } else {
                QMessageBox::warning(this, "Error", "Failed to create the temporary file for InfoStudents.csv.");
            }
        } else {
            QMessageBox::warning(this, "Error", "Failed to open InfoStudents.csv for reading.");
        }

        // Show a success message
        QMessageBox::information(this, "Course Deleted", "Course and associated students deleted successfully.");
         emit courseDeleted();
    }


}
