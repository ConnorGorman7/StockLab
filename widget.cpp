#include "widget.h"
#include "ui_widget.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    setupReturnButtonConnections();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setupReturnButtonConnections()
{
    // Find all QPushButtons whose object name starts with "RETURNBTN"
    QList<QPushButton*> returnButtons = findChildren<QPushButton*>();

    for (auto button : returnButtons) {
        if (button->objectName().startsWith("RETURNBTN")) {
            // Connect all buttons that start with "RETURNBTN" to the same slot
            connect(button, &QPushButton::clicked, this, [=]() {
                ui->moduleStack->setCurrentIndex(0);  // Return to the main module list (index 0 in moduleStack)
            });
        }
    }
}

void Widget::on_loginButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Widget::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Widget::on_backButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Widget::on_backButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Widget::on_regStuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Widget::on_regTeachButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Widget::on_registerStudentBtn_clicked()
{
    QString filePath = "C:/Qt/Projects/tradeApp/users.txt";
    QFile file(filePath);

    QString email = ui->studentEmailTE->toPlainText();

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (!email.isEmpty() && line.contains(email)) {
                QMessageBox::critical(this, "Invalid email", "This email is already taken");
                file.close();
                return;
            }
        }
        file.close();
    } else {
        qDebug() << "Could not open file for reading.";
    }

    if(file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);

        QString name = ui->studentNameTE->toPlainText();
        QString password = ui->studentPwTE->toPlainText();

        if (!name.isEmpty() && !email.isEmpty() && !password.isEmpty()) {
            out << name << Qt::endl << email << Qt::endl << password << Qt::endl << "Student" << Qt::endl;
            out << Qt::endl;
            QMessageBox::information(this, "Registration successful", "You have successfully registered your account!");
            ui->stackedWidget->setCurrentIndex(4);
        } else {
            QMessageBox::critical(this, "Invalid details", "One or more fields have been left empty. Please ensure all fields are filled out.");
            file.close();
            return;
        }
        file.close();
    } else {
        qDebug() << "Could not open file for writing.";
    }
}


void Widget::on_registerTeacherBtn_clicked()
{
    QString filePath = "C:/Qt/Projects/tradeApp/users.txt";
    QFile file(filePath);

    QString email = ui->teachEmailTE->toPlainText();

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (!email.isEmpty() && (QString::compare(line, email) == 0)) {
                QMessageBox::critical(this, "Invalid email", "This email is already taken");
                file.close();
                return;
            }
        }
        file.close();
    } else {
        qDebug() << "Could not open file for reading.";
    }

    if(file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);

        QString name = ui->teachNameTE->toPlainText();
        QString password = ui->teachPwTE->toPlainText();

        if (!name.isEmpty() && !email.isEmpty() && !password.isEmpty()) {
            out << name << Qt::endl << email << Qt::endl << password << Qt::endl << "Teacher" << Qt::endl;
            out << Qt::endl;
            QMessageBox::information(this, "Registration successful", "You have successfully registered your account!");
        } else {
            QMessageBox::critical(this, "Invalid details", "One or more fields have been left empty. Please ensure all fields are filled out.");
            file.close();
            return;
        }
        file.close();
    } else {
        qDebug() << "Could not open file for writing.";
    }
}


void Widget::on_loginScreenButton_clicked()
{
    QString filePath = "C:/Qt/Projects/tradeApp/users.txt";
    QFile file(filePath);

    QString email = ui->loginEmailTE->toPlainText();
    QString password = ui->loginPwTE->toPlainText();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::critical(this, "Invalid input", "Email or password was left empty. Please ensure the fields are filled out.");
        return;
    }

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        bool emailFound = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            if (QString::compare(line, email) == 0) {
                emailFound = true;
                line = in.readLine(); // Read the next line for the password

                if (QString::compare(line, password) == 0) {
                    QMessageBox::information(this, "Login success", "Successfully logged in!");
                    file.close();
                    // Switch to modules screen once implemented
                    if (QString::compare(in.readLine(), "Student") == 0) {
                        ui->stackedWidget->setCurrentIndex(4);
                        return;
                    } else {
                        // switch to teacher home page
                    }
                } else {
                    QMessageBox::critical(this, "Incorrect password", "Incorrect password. Please try again.");
                    file.close();
                    return;
                }
            }
        }

        // Check if email was found after the loop
        if (!emailFound) {
            QMessageBox::critical(this, "Invalid email", "The specified email could not be found. Please try again.");
        }

        file.close();
    } else {
        qDebug() << "Could not open file for reading.";
    }
}



void Widget::on_logoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_menu_clicked()
{
    ui->moduleStack->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(4);
}

void Widget::on_modules_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->moduleStack->setCurrentIndex(0);
}

void Widget::on_RETURNBTN_clicked()
{
    ui->moduleStack->setCurrentIndex(0);
}

void Widget::on_mod1_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module1));
    ui->mod1stack->setCurrentIndex(ui->mod1stack->indexOf(ui->mod1content));
}

void Widget::on_mod2_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module2));
    ui->mod2stack->setCurrentIndex(ui->mod2stack->indexOf(ui->mod2content));
}

void Widget::on_mod3_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module3));
    ui->mod3stack->setCurrentIndex(ui->mod3stack->indexOf(ui->mod3content));
}

void Widget::on_mod4_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module4));
    ui->mod4stack->setCurrentIndex(ui->mod4stack->indexOf(ui->mod4content));
}

void Widget::on_mod5_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module5));
    ui->mod5stack->setCurrentIndex(ui->mod5stack->indexOf(ui->mod5content));
}

void Widget::on_mod6_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module6));
    ui->mod6stack->setCurrentIndex(ui->mod6stack->indexOf(ui->mod6content));
}

void Widget::on_mod7_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module7));
    ui->mod7stack->setCurrentIndex(ui->mod7stack->indexOf(ui->mod7content));
}

void Widget::on_mod8_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module8));
    ui->mod8stack->setCurrentIndex(ui->mod8stack->indexOf(ui->mod8content));
}

void Widget::on_mod9_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module9));
    ui->mod9stack->setCurrentIndex(ui->mod9stack->indexOf(ui->mod9content));
}

void Widget::on_quizButton1_clicked()
{
    ui->moduleStack->setCurrentIndex(ui->moduleStack->indexOf(ui->module1));
}

