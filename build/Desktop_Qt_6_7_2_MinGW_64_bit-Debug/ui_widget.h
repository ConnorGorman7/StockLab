/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *welcomePage;
    QLabel *label;
    QPushButton *loginButton;
    QPushButton *regStuButton;
    QPushButton *regTeachButton;
    QWidget *loginPage;
    QLabel *label_3;
    QLabel *label_2;
    QTextEdit *emailEdit;
    QLabel *label_4;
    QTextEdit *pwEdit;
    QPushButton *backButton;
    QPushButton *pushButton;
    QWidget *page;
    QTextEdit *emailEdit_2;
    QLabel *label_5;
    QPushButton *backButton_2;
    QLabel *label_7;
    QLabel *label_6;
    QTextEdit *pwEdit_2;
    QTextEdit *emailEdit_3;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QTextEdit *pwEdit_3;
    QTextEdit *emailEdit_5;
    QPushButton *pushButton_3;
    QLabel *label_11;
    QLabel *label_10;
    QTextEdit *emailEdit_4;
    QLabel *label_12;
    QPushButton *backButton_3;
    QLabel *label_9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(0, 0, 801, 601));
        stackedWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        welcomePage = new QWidget();
        welcomePage->setObjectName("welcomePage");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(false);
        welcomePage->setFont(font);
        label = new QLabel(welcomePage);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 120, 171, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(16);
        font1.setBold(false);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        loginButton = new QPushButton(welcomePage);
        loginButton->setObjectName("loginButton");
        loginButton->setEnabled(true);
        loginButton->setGeometry(QRect(230, 210, 321, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        loginButton->setFont(font2);
        regStuButton = new QPushButton(welcomePage);
        regStuButton->setObjectName("regStuButton");
        regStuButton->setGeometry(QRect(230, 310, 321, 71));
        regStuButton->setFont(font2);
        regTeachButton = new QPushButton(welcomePage);
        regTeachButton->setObjectName("regTeachButton");
        regTeachButton->setGeometry(QRect(230, 410, 321, 71));
        regTeachButton->setFont(font2);
        stackedWidget->addWidget(welcomePage);
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        label_3 = new QLabel(loginPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 100, 171, 51));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(loginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 200, 41, 20));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        emailEdit = new QTextEdit(loginPage);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(250, 200, 311, 31));
        label_4 = new QLabel(loginPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 270, 71, 20));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pwEdit = new QTextEdit(loginPage);
        pwEdit->setObjectName("pwEdit");
        pwEdit->setGeometry(QRect(250, 270, 311, 31));
        backButton = new QPushButton(loginPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(40, 30, 83, 29));
        pushButton = new QPushButton(loginPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 340, 131, 41));
        stackedWidget->addWidget(loginPage);
        page = new QWidget();
        page->setObjectName("page");
        emailEdit_2 = new QTextEdit(page);
        emailEdit_2->setObjectName("emailEdit_2");
        emailEdit_2->setGeometry(QRect(240, 240, 311, 31));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 240, 41, 20));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backButton_2 = new QPushButton(page);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(30, 30, 83, 29));
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 290, 71, 20));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 120, 281, 51));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pwEdit_2 = new QTextEdit(page);
        pwEdit_2->setObjectName("pwEdit_2");
        pwEdit_2->setGeometry(QRect(240, 290, 311, 31));
        emailEdit_3 = new QTextEdit(page);
        emailEdit_3->setObjectName("emailEdit_3");
        emailEdit_3->setGeometry(QRect(240, 190, 311, 31));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(180, 190, 41, 20));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 350, 131, 41));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pwEdit_3 = new QTextEdit(page_2);
        pwEdit_3->setObjectName("pwEdit_3");
        pwEdit_3->setGeometry(QRect(260, 300, 311, 31));
        emailEdit_5 = new QTextEdit(page_2);
        emailEdit_5->setObjectName("emailEdit_5");
        emailEdit_5->setGeometry(QRect(260, 250, 311, 31));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(340, 360, 131, 41));
        label_11 = new QLabel(page_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(170, 300, 71, 20));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(200, 250, 41, 20));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        emailEdit_4 = new QTextEdit(page_2);
        emailEdit_4->setObjectName("emailEdit_4");
        emailEdit_4->setGeometry(QRect(260, 200, 311, 31));
        label_12 = new QLabel(page_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(270, 130, 281, 51));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backButton_3 = new QPushButton(page_2);
        backButton_3->setObjectName("backButton_3");
        backButton_3->setGeometry(QRect(50, 40, 83, 29));
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(200, 200, 41, 20));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_2);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Welcome", nullptr));
        loginButton->setText(QCoreApplication::translate("Widget", "Log in", nullptr));
        regStuButton->setText(QCoreApplication::translate("Widget", "Register as a student", nullptr));
        regTeachButton->setText(QCoreApplication::translate("Widget", "Register as a teacher", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Email:", nullptr));
        emailEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Password:", nullptr));
        pwEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        backButton->setText(QCoreApplication::translate("Widget", "Go back", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Log in", nullptr));
        emailEdit_2->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Email:", nullptr));
        backButton_2->setText(QCoreApplication::translate("Widget", "Go back", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "Password:", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Register as a student", nullptr));
        pwEdit_2->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        emailEdit_3->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "Name:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Register", nullptr));
        pwEdit_3->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        emailEdit_5->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "Register", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "Password:", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "Email:", nullptr));
        emailEdit_4->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "Register as a teacher", nullptr));
        backButton_3->setText(QCoreApplication::translate("Widget", "Go back", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
