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
}

Widget::~Widget()
{
    delete ui;
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
            out << name << Qt::endl << email << Qt::endl << password << Qt::endl;
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


void Widget::on_registerTeacherBtn_clicked()
{
    QString filePath = "C:/Qt/Projects/tradeApp/users.txt";
    QFile file(filePath);

    QString email = ui->teachEmailTE->toPlainText();

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

        QString name = ui->teachNameTE->toPlainText();
        QString password = ui->teachPwTE->toPlainText();

        if (!name.isEmpty() && !email.isEmpty() && !password.isEmpty()) {
            out << name << Qt::endl << email << Qt::endl << password << Qt::endl;
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
                    return;
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


