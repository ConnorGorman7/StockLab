#include "widget.h"
#include "ui_widget.h"

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

