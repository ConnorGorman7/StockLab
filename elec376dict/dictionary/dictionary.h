#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <QMainWindow>
#include "dict.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Dictionary;
}
QT_END_NAMESPACE

class Dictionary : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dictionary(QWidget *parent = nullptr);
    ~Dictionary();

private slots:
    void on_registerStudentButton_clicked();
    void on_markCompletedButton_clicked();
    void on_markUncompletedButton_clicked();
    void on_showModulesButton_clicked();
    void on_getDefinitionButton_clicked();

private:
    Ui::Dictionary *ui;
    Dict dictionary; // Instance of the backend dictionary class
};

#endif // DICTIONARY_H
