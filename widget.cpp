#include "widget.h"
#include "ui_widget.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>

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
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        QString name = ui->nameTE->toPlainText();
        QString email = ui->studentEmailTE->toPlainText();
        QString password = ui->studentPwTE->toPlainText();
        out << name << Qt::endl << email << Qt::endl << password << Qt::endl;
        out << Qt::endl;
        file.close();
        qDebug() << "File written successfully";
    } else {
        qDebug() << "Could not open file for writing";
    }
}

