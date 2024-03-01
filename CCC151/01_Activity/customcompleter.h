// customcompleter.h
#ifndef CUSTOMCOMPLETER_H
#define CUSTOMCOMPLETER_H

#include <QCompleter>

class CustomCompleter : public QCompleter
{
    Q_OBJECT

public:
    CustomCompleter(QObject *parent = nullptr);  // Default constructor
    CustomCompleter(QAbstractItemModel *model, QObject *parent = nullptr);

    // Override pathFromIndex to customize suggestion list display
    QString pathFromIndex(const QModelIndex &index) const override;

private:
    // Add a member variable for the custom completer
    CustomCompleter *customCompleter;
};

#endif // CUSTOMCOMPLETER_H
