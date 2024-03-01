// customcompleter.cpp
#include "customcompleter.h"
#include <QStandardItemModel>

CustomCompleter::CustomCompleter(QAbstractItemModel *model, QObject *parent)
    : QCompleter(model, parent)
{
    setCaseSensitivity(Qt::CaseInsensitive);
}

QString CustomCompleter::pathFromIndex(const QModelIndex &index) const
{
    QModelIndex firstNameIndex = model()->index(index.row(), 1); // Assuming First Name is in column 1
    QString firstName = firstNameIndex.data(Qt::DisplayRole).toString();

    QModelIndex lastNameIndex = model()->index(index.row(), 0); // Assuming Last Name is in column 0
    QString lastName = lastNameIndex.data(Qt::DisplayRole).toString();

    // Customize the display format as needed
    return lastName + ", " + firstName;
}

QStringList CustomCompleter::splitPath(const QString &path) const
{
    // Override this function to provide custom completion behavior
    // For example, you might want to split the path based on a delimiter
    return path.split(" ", Qt::SkipEmptyParts);
}
