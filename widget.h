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

    void on_modules_clicked();

    void on_mod1_clicked();

    void on_mod2_clicked();

    void on_mod3_clicked();

    void on_mod4_clicked();

    void on_mod5_clicked();

    void on_pushButton_clicked();

    void on_RETURNBTN_clicked();

    void on_menu_clicked();

    void on_mod6_clicked();

    void on_mod7_clicked();

    void on_mod8_clicked();

    void on_mod9_clicked();

private:
    Ui::Widget *ui;

    void setupReturnButtonConnections();
};
#endif // WIDGET_H
