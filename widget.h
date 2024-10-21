#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_loginButton_clicked();

    void on_backButton_clicked();

    void on_backButton_2_clicked();

    void on_backButton_3_clicked();

    void on_regStuButton_clicked();

    void on_regTeachButton_clicked();

    void on_registerStudentBtn_clicked();

    void on_registerTeacherBtn_clicked();

    void on_loginScreenButton_clicked();

    void on_logoutButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
