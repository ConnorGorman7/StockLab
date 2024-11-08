#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dictionary;
}
QT_END_NAMESPACE

class Dictionary : public QMainWindow
{
    Q_OBJECT

public:
    Dictionary(QWidget *parent = nullptr);
    ~Dictionary();

private:
    Ui::Dictionary *ui;
};
#endif // DICTIONARY_H
