/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *welcomePage;
    QLabel *label;
    QPushButton *loginButton;
    QPushButton *regStuButton;
    QPushButton *regTeachButton;
    QWidget *loginPage;
    QLabel *label_3;
    QLabel *label_2;
    QTextEdit *loginEmailTE;
    QLabel *label_4;
    QTextEdit *loginPwTE;
    QPushButton *backButton;
    QPushButton *loginScreenButton;
    QWidget *studentReg;
    QTextEdit *studentEmailTE;
    QLabel *label_5;
    QPushButton *backButton_2;
    QLabel *label_7;
    QLabel *label_6;
    QTextEdit *studentPwTE;
    QTextEdit *studentNameTE;
    QLabel *label_8;
    QPushButton *registerStudentBtn;
    QWidget *teacherReg;
    QTextEdit *teachPwTE;
    QTextEdit *teachEmailTE;
    QPushButton *registerTeacherBtn;
    QLabel *label_11;
    QLabel *label_10;
    QTextEdit *teachNameTE;
    QLabel *label_12;
    QPushButton *backButton_3;
    QLabel *label_9;
    QWidget *studentHome;
    QPushButton *adminInfo;
    QPushButton *settings;
    QPushButton *dictionary;
    QPushButton *modules;
    QLabel *studentHomeHeader;
    QPushButton *logoutButton;
    QWidget *moduleWidget;
    QStackedWidget *moduleStack;
    QWidget *moduleHomepage;
    QGridLayout *gridLayout_2;
    QLabel *advancedLabel;
    QLabel *introductoryLabel;
    QProgressBar *beginProgress;
    QPushButton *mod11;
    QPushButton *mod9;
    QPushButton *mod10;
    QProgressBar *advProgress;
    QPushButton *mod14;
    QPushButton *mod4;
    QPushButton *mod12;
    QPushButton *mod15;
    QLabel *moduleWelcome;
    QPushButton *mod1;
    QPushButton *mod8;
    QPushButton *mod7;
    QPushButton *mod6;
    QLabel *intermediateLabel;
    QPushButton *mod2;
    QPushButton *mod3;
    QPushButton *mod5;
    QProgressBar *interProgress;
    QPushButton *mod13;
    QPushButton *menu;
    QWidget *module1;
    QGridLayout *gridLayout;
    QPushButton *RETURNBTN;
    QLabel *mod1header;
    QPlainTextEdit *mod1text;
    QWidget *module2;
    QGridLayout *gridLayout_3;
    QPushButton *RETURNBTN_2;
    QPlainTextEdit *mod2text;
    QLabel *mod2header;
    QWidget *module3;
    QGridLayout *gridLayout_5;
    QPushButton *RETURNBTN_3;
    QLabel *mod2header_2;
    QPlainTextEdit *mod2text_2;
    QWidget *module5;
    QGridLayout *gridLayout_7;
    QPushButton *RETURNBTN_5;
    QLabel *mod2header_4;
    QPlainTextEdit *mod2text_4;
    QWidget *module4;
    QGridLayout *gridLayout_6;
    QPushButton *RETURNBTN_4;
    QLabel *mod2header_3;
    QPlainTextEdit *mod2text_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(802, 600);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName("gridLayout_4");
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        welcomePage = new QWidget();
        welcomePage->setObjectName("welcomePage");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(false);
        welcomePage->setFont(font);
        label = new QLabel(welcomePage);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 120, 281, 51));
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
        loginEmailTE = new QTextEdit(loginPage);
        loginEmailTE->setObjectName("loginEmailTE");
        loginEmailTE->setGeometry(QRect(250, 200, 311, 31));
        label_4 = new QLabel(loginPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 270, 71, 20));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        loginPwTE = new QTextEdit(loginPage);
        loginPwTE->setObjectName("loginPwTE");
        loginPwTE->setGeometry(QRect(250, 270, 311, 31));
        backButton = new QPushButton(loginPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(40, 30, 83, 29));
        loginScreenButton = new QPushButton(loginPage);
        loginScreenButton->setObjectName("loginScreenButton");
        loginScreenButton->setGeometry(QRect(330, 340, 131, 41));
        stackedWidget->addWidget(loginPage);
        studentReg = new QWidget();
        studentReg->setObjectName("studentReg");
        studentEmailTE = new QTextEdit(studentReg);
        studentEmailTE->setObjectName("studentEmailTE");
        studentEmailTE->setGeometry(QRect(240, 240, 311, 31));
        label_5 = new QLabel(studentReg);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 240, 41, 20));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backButton_2 = new QPushButton(studentReg);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(30, 30, 83, 29));
        label_7 = new QLabel(studentReg);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 290, 71, 20));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(studentReg);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 120, 281, 51));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        studentPwTE = new QTextEdit(studentReg);
        studentPwTE->setObjectName("studentPwTE");
        studentPwTE->setGeometry(QRect(240, 290, 311, 31));
        studentNameTE = new QTextEdit(studentReg);
        studentNameTE->setObjectName("studentNameTE");
        studentNameTE->setGeometry(QRect(240, 190, 311, 31));
        label_8 = new QLabel(studentReg);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(180, 190, 41, 20));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        registerStudentBtn = new QPushButton(studentReg);
        registerStudentBtn->setObjectName("registerStudentBtn");
        registerStudentBtn->setGeometry(QRect(320, 350, 131, 41));
        stackedWidget->addWidget(studentReg);
        teacherReg = new QWidget();
        teacherReg->setObjectName("teacherReg");
        teachPwTE = new QTextEdit(teacherReg);
        teachPwTE->setObjectName("teachPwTE");
        teachPwTE->setGeometry(QRect(260, 300, 311, 31));
        teachEmailTE = new QTextEdit(teacherReg);
        teachEmailTE->setObjectName("teachEmailTE");
        teachEmailTE->setGeometry(QRect(260, 250, 311, 31));
        registerTeacherBtn = new QPushButton(teacherReg);
        registerTeacherBtn->setObjectName("registerTeacherBtn");
        registerTeacherBtn->setGeometry(QRect(340, 360, 131, 41));
        label_11 = new QLabel(teacherReg);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(170, 300, 71, 20));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(teacherReg);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(200, 250, 41, 20));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        teachNameTE = new QTextEdit(teacherReg);
        teachNameTE->setObjectName("teachNameTE");
        teachNameTE->setGeometry(QRect(260, 200, 311, 31));
        label_12 = new QLabel(teacherReg);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(270, 130, 281, 51));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backButton_3 = new QPushButton(teacherReg);
        backButton_3->setObjectName("backButton_3");
        backButton_3->setGeometry(QRect(50, 40, 83, 29));
        label_9 = new QLabel(teacherReg);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(200, 200, 41, 20));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(teacherReg);
        studentHome = new QWidget();
        studentHome->setObjectName("studentHome");
        adminInfo = new QPushButton(studentHome);
        adminInfo->setObjectName("adminInfo");
        adminInfo->setGeometry(QRect(430, 350, 150, 60));
        settings = new QPushButton(studentHome);
        settings->setObjectName("settings");
        settings->setGeometry(QRect(210, 350, 150, 60));
        dictionary = new QPushButton(studentHome);
        dictionary->setObjectName("dictionary");
        dictionary->setGeometry(QRect(210, 240, 150, 60));
        modules = new QPushButton(studentHome);
        modules->setObjectName("modules");
        modules->setGeometry(QRect(430, 240, 150, 60));
        studentHomeHeader = new QLabel(studentHome);
        studentHomeHeader->setObjectName("studentHomeHeader");
        studentHomeHeader->setGeometry(QRect(320, 170, 150, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setBold(true);
        studentHomeHeader->setFont(font3);
        studentHomeHeader->setAlignment(Qt::AlignmentFlag::AlignCenter);
        logoutButton = new QPushButton(studentHome);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(30, 20, 83, 29));
        stackedWidget->addWidget(studentHome);
        moduleWidget = new QWidget();
        moduleWidget->setObjectName("moduleWidget");
        moduleStack = new QStackedWidget(moduleWidget);
        moduleStack->setObjectName("moduleStack");
        moduleStack->setGeometry(QRect(-1, -11, 765, 601));
        moduleHomepage = new QWidget();
        moduleHomepage->setObjectName("moduleHomepage");
        gridLayout_2 = new QGridLayout(moduleHomepage);
        gridLayout_2->setObjectName("gridLayout_2");
        advancedLabel = new QLabel(moduleHomepage);
        advancedLabel->setObjectName("advancedLabel");
        advancedLabel->setMaximumSize(QSize(16777215, 25));
        QFont font4;
        font4.setBold(true);
        advancedLabel->setFont(font4);
        advancedLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(advancedLabel, 7, 2, 1, 1);

        introductoryLabel = new QLabel(moduleHomepage);
        introductoryLabel->setObjectName("introductoryLabel");
        introductoryLabel->setMaximumSize(QSize(16777215, 25));
        introductoryLabel->setFont(font4);
        introductoryLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(introductoryLabel, 7, 0, 1, 1);

        beginProgress = new QProgressBar(moduleHomepage);
        beginProgress->setObjectName("beginProgress");
        beginProgress->setValue(0);

        gridLayout_2->addWidget(beginProgress, 13, 0, 1, 1);

        mod11 = new QPushButton(moduleHomepage);
        mod11->setObjectName("mod11");
        mod11->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod11, 8, 2, 1, 1);

        mod9 = new QPushButton(moduleHomepage);
        mod9->setObjectName("mod9");
        mod9->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod9, 11, 1, 1, 1);

        mod10 = new QPushButton(moduleHomepage);
        mod10->setObjectName("mod10");
        mod10->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod10, 12, 1, 1, 1);

        advProgress = new QProgressBar(moduleHomepage);
        advProgress->setObjectName("advProgress");
        advProgress->setValue(0);

        gridLayout_2->addWidget(advProgress, 13, 2, 1, 1);

        mod14 = new QPushButton(moduleHomepage);
        mod14->setObjectName("mod14");
        mod14->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod14, 11, 2, 1, 1);

        mod4 = new QPushButton(moduleHomepage);
        mod4->setObjectName("mod4");
        mod4->setMinimumSize(QSize(0, 40));
        mod4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        gridLayout_2->addWidget(mod4, 11, 0, 1, 1);

        mod12 = new QPushButton(moduleHomepage);
        mod12->setObjectName("mod12");
        mod12->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod12, 9, 2, 1, 1);

        mod15 = new QPushButton(moduleHomepage);
        mod15->setObjectName("mod15");
        mod15->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod15, 12, 2, 1, 1);

        moduleWelcome = new QLabel(moduleHomepage);
        moduleWelcome->setObjectName("moduleWelcome");
        moduleWelcome->setMaximumSize(QSize(16777215, 30));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        moduleWelcome->setFont(font5);
        moduleWelcome->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(moduleWelcome, 4, 0, 1, 3);

        mod1 = new QPushButton(moduleHomepage);
        mod1->setObjectName("mod1");
        mod1->setMinimumSize(QSize(0, 40));
        mod1->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(mod1, 8, 0, 1, 1);

        mod8 = new QPushButton(moduleHomepage);
        mod8->setObjectName("mod8");
        mod8->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod8, 10, 1, 1, 1);

        mod7 = new QPushButton(moduleHomepage);
        mod7->setObjectName("mod7");
        mod7->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod7, 9, 1, 1, 1);

        mod6 = new QPushButton(moduleHomepage);
        mod6->setObjectName("mod6");
        mod6->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod6, 8, 1, 1, 1);

        intermediateLabel = new QLabel(moduleHomepage);
        intermediateLabel->setObjectName("intermediateLabel");
        intermediateLabel->setFont(font4);
        intermediateLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(intermediateLabel, 7, 1, 1, 1);

        mod2 = new QPushButton(moduleHomepage);
        mod2->setObjectName("mod2");
        mod2->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod2, 9, 0, 1, 1);

        mod3 = new QPushButton(moduleHomepage);
        mod3->setObjectName("mod3");
        mod3->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod3, 10, 0, 1, 1);

        mod5 = new QPushButton(moduleHomepage);
        mod5->setObjectName("mod5");
        mod5->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod5, 12, 0, 1, 1);

        interProgress = new QProgressBar(moduleHomepage);
        interProgress->setObjectName("interProgress");
        interProgress->setValue(0);

        gridLayout_2->addWidget(interProgress, 13, 1, 1, 1);

        mod13 = new QPushButton(moduleHomepage);
        mod13->setObjectName("mod13");
        mod13->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod13, 10, 2, 1, 1);

        menu = new QPushButton(moduleHomepage);
        menu->setObjectName("menu");

        gridLayout_2->addWidget(menu, 14, 0, 1, 3);

        moduleStack->addWidget(moduleHomepage);
        module1 = new QWidget();
        module1->setObjectName("module1");
        gridLayout = new QGridLayout(module1);
        gridLayout->setObjectName("gridLayout");
        RETURNBTN = new QPushButton(module1);
        RETURNBTN->setObjectName("RETURNBTN");

        gridLayout->addWidget(RETURNBTN, 0, 0, 1, 1);

        mod1header = new QLabel(module1);
        mod1header->setObjectName("mod1header");
        mod1header->setFont(font5);

        gridLayout->addWidget(mod1header, 0, 1, 1, 1, Qt::AlignmentFlag::AlignTop);

        mod1text = new QPlainTextEdit(module1);
        mod1text->setObjectName("mod1text");
        mod1text->setReadOnly(true);

        gridLayout->addWidget(mod1text, 1, 0, 1, 2);

        moduleStack->addWidget(module1);
        module2 = new QWidget();
        module2->setObjectName("module2");
        gridLayout_3 = new QGridLayout(module2);
        gridLayout_3->setObjectName("gridLayout_3");
        RETURNBTN_2 = new QPushButton(module2);
        RETURNBTN_2->setObjectName("RETURNBTN_2");
        RETURNBTN_2->setMaximumSize(QSize(96, 29));

        gridLayout_3->addWidget(RETURNBTN_2, 0, 0, 1, 1);

        mod2text = new QPlainTextEdit(module2);
        mod2text->setObjectName("mod2text");
        mod2text->setReadOnly(true);

        gridLayout_3->addWidget(mod2text, 2, 0, 1, 2);

        mod2header = new QLabel(module2);
        mod2header->setObjectName("mod2header");
        mod2header->setFont(font5);

        gridLayout_3->addWidget(mod2header, 0, 1, 1, 1);

        moduleStack->addWidget(module2);
        module3 = new QWidget();
        module3->setObjectName("module3");
        gridLayout_5 = new QGridLayout(module3);
        gridLayout_5->setObjectName("gridLayout_5");
        RETURNBTN_3 = new QPushButton(module3);
        RETURNBTN_3->setObjectName("RETURNBTN_3");
        RETURNBTN_3->setMaximumSize(QSize(96, 29));

        gridLayout_5->addWidget(RETURNBTN_3, 0, 0, 1, 1);

        mod2header_2 = new QLabel(module3);
        mod2header_2->setObjectName("mod2header_2");
        mod2header_2->setFont(font5);

        gridLayout_5->addWidget(mod2header_2, 0, 1, 1, 1);

        mod2text_2 = new QPlainTextEdit(module3);
        mod2text_2->setObjectName("mod2text_2");
        mod2text_2->setReadOnly(true);

        gridLayout_5->addWidget(mod2text_2, 1, 0, 1, 2);

        moduleStack->addWidget(module3);
        module5 = new QWidget();
        module5->setObjectName("module5");
        gridLayout_7 = new QGridLayout(module5);
        gridLayout_7->setObjectName("gridLayout_7");
        RETURNBTN_5 = new QPushButton(module5);
        RETURNBTN_5->setObjectName("RETURNBTN_5");
        RETURNBTN_5->setMaximumSize(QSize(96, 29));

        gridLayout_7->addWidget(RETURNBTN_5, 0, 0, 1, 1);

        mod2header_4 = new QLabel(module5);
        mod2header_4->setObjectName("mod2header_4");
        mod2header_4->setFont(font5);

        gridLayout_7->addWidget(mod2header_4, 0, 1, 1, 1);

        mod2text_4 = new QPlainTextEdit(module5);
        mod2text_4->setObjectName("mod2text_4");
        mod2text_4->setReadOnly(true);

        gridLayout_7->addWidget(mod2text_4, 1, 0, 1, 2);

        moduleStack->addWidget(module5);
        module4 = new QWidget();
        module4->setObjectName("module4");
        gridLayout_6 = new QGridLayout(module4);
        gridLayout_6->setObjectName("gridLayout_6");
        RETURNBTN_4 = new QPushButton(module4);
        RETURNBTN_4->setObjectName("RETURNBTN_4");
        RETURNBTN_4->setMaximumSize(QSize(96, 29));

        gridLayout_6->addWidget(RETURNBTN_4, 0, 0, 1, 1);

        mod2header_3 = new QLabel(module4);
        mod2header_3->setObjectName("mod2header_3");
        mod2header_3->setFont(font5);

        gridLayout_6->addWidget(mod2header_3, 0, 1, 1, 1);

        mod2text_3 = new QPlainTextEdit(module4);
        mod2text_3->setObjectName("mod2text_3");
        mod2text_3->setReadOnly(true);

        gridLayout_6->addWidget(mod2text_3, 1, 0, 1, 2);

        moduleStack->addWidget(module4);
        stackedWidget->addWidget(moduleWidget);

        gridLayout_4->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(5);
        moduleStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Welcome To TradeApp", nullptr));
        loginButton->setText(QCoreApplication::translate("Widget", "Log in", nullptr));
        regStuButton->setText(QCoreApplication::translate("Widget", "Register as a student", nullptr));
        regTeachButton->setText(QCoreApplication::translate("Widget", "Register as a teacher", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Email:", nullptr));
        loginEmailTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Password:", nullptr));
        loginPwTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        backButton->setText(QCoreApplication::translate("Widget", "Go back", nullptr));
        loginScreenButton->setText(QCoreApplication::translate("Widget", "Log in", nullptr));
        studentEmailTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        studentPwTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        studentNameTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "Name:", nullptr));
        registerStudentBtn->setText(QCoreApplication::translate("Widget", "Register", nullptr));
        teachPwTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        teachEmailTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        registerTeacherBtn->setText(QCoreApplication::translate("Widget", "Register", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "Password:", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "Email:", nullptr));
        teachNameTE->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        adminInfo->setText(QCoreApplication::translate("Widget", "Admin\n"
"Information", nullptr));
        settings->setText(QCoreApplication::translate("Widget", "Settings", nullptr));
        dictionary->setText(QCoreApplication::translate("Widget", "Dictionary", nullptr));
        modules->setText(QCoreApplication::translate("Widget", "Modules", nullptr));
        studentHomeHeader->setText(QCoreApplication::translate("Widget", "Student Homepage", nullptr));
        logoutButton->setText(QCoreApplication::translate("Widget", "Log out", nullptr));
        advancedLabel->setText(QCoreApplication::translate("Widget", "Advanced", nullptr));
        introductoryLabel->setText(QCoreApplication::translate("Widget", "Introductory", nullptr));
        mod11->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod9->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod10->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod14->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod4->setText(QCoreApplication::translate("Widget", "M4 - Intro to Investment Strategies", nullptr));
        mod12->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod15->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        moduleWelcome->setText(QCoreApplication::translate("Widget", "Module Home - Are you ready to learn?", nullptr));
        mod1->setText(QCoreApplication::translate("Widget", "M1 - Basic Intuition", nullptr));
        mod8->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod7->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        intermediateLabel->setText(QCoreApplication::translate("Widget", "Intermediate", nullptr));
        mod2->setText(QCoreApplication::translate("Widget", "M2 - Trading Basics", nullptr));
        mod3->setText(QCoreApplication::translate("Widget", "M3 - Fundamental Analysis", nullptr));
        mod5->setText(QCoreApplication::translate("Widget", "M5 - ?", nullptr));
        mod13->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        menu->setText(QCoreApplication::translate("Widget", "Return", nullptr));
        RETURNBTN->setText(QCoreApplication::translate("Widget", "Return", nullptr));
        mod1header->setText(QCoreApplication::translate("Widget", "Mod 1 - Understanding Market Movements and Major Events", nullptr));
        mod1text->setPlainText(QCoreApplication::translate("Widget", "Module 1: Understanding Market Movements and Major Events\n"
"\n"
"1 - What is the Stock Market?\n"
"The stock market is a collection of exchanges where investors buy and sell shares of publicly traded companies. Think of it as a marketplace for businesses to raise money by offering ownership stakes to investors, and for investors to potentially profit from the company's growth.\n"
"\n"
"2 - How Stocks Represent Ownership in a Company\n"
"When you buy a stock, you're purchasing a small piece of that company, known as a share. This ownership entitles you to a portion of the company's profits and assets. If the company does well, the value of your shares may increase, allowing you to sell them for a profit. Conversely, if the company performs poorly, the value of your shares may decrease.\n"
"\n"
"3 - Basic Terminology\n"
"    -> Stocks/Shares: Units of ownership in a company.\n"
"    -> Equities: Another term for stocks, representing ownership interest.\n"
"    -> Stock Exchange: A platform where stocks are bou"
                        "ght and sold (e.g., New York Stock Exchange, NASDAQ).\n"
"    -> Investor/Shareholder: An individual or entity that owns shares in a company.\n"
"    -> Dividends: A portion of a company's earnings distributed to shareholders.\n"
"\n"
"4 - Explanation of Bull and Bear Markets\n"
"    -> Bull Market: A period when stock prices are generally rising. Optimism is high, and investors are confident that the upward trend will continue. It's called a bull market because bulls charge forward with their horns up.\n"
"\n"
"    -> Bear Market: A period when stock prices are generally falling. Pessimism prevails, and investors may start selling off stocks to prevent further losses. It's termed a bear market because bears swipe downward with their paws.\n"
"\n"
"5 - Factors Influencing Stock Prices\n"
"1. Supply and Demand:\n"
"    -> Supply: The number of shares available for sale.\n"
"    -> Demand: The number of shares investors want to buy.\n"
"    -> Prices rise when demand exceeds supply and fall when supply exceeds d"
                        "emand.\n"
"\n"
"2. Company Performance:\n"
"    -> Earnings reports, product launches, and leadership changes can affect stock prices.\n"
"\n"
"3. Economic Indicators:\n"
"    -> Interest rates, inflation, and employment rates influence investor decisions.\n"
"\n"
"4. Market Sentiment:\n"
"    -> The overall attitude of investors toward the market or a particular stock.\n"
"\n"
"6 - The Role of Investor Sentiment\n"
"Investor sentiment reflects the mood of investors at a given time. It's shaped by news, economic indicators, and global events. Positive sentiment can drive prices up as more investors buy stocks, while negative sentiment can lead to selling and price declines.\n"
"\n"
"7 - How Global Events Affect the Stock Market\n"
"Global events\342\200\224such as political elections, natural disasters, pandemics, and economic policies\342\200\224can have immediate and significant impacts on stock markets. They can influence investor confidence and lead to rapid changes in supply and demand for stocks.\n"
"\n"
""
                        "8 - Case Study: The 2008 Financial Crisis\n"
"\n"
"8.1 - Causes of the Crisis\n"
"1. Subprime Mortgage Lending:\n"
"    -> Banks and financial institutions gave mortgages to borrowers with poor credit histories (subprime borrowers).\n"
"    -> These high-risk loans were bundled into complex financial products called mortgage-backed securities and sold to investors.\n"
"\n"
"2. Financial Derivatives:\n"
"    -> Instruments like collateralized debt obligations (CDOs) spread the risk across the financial system.\n"
"    -> Lack of transparency and understanding of these products amplified the risk.\n"
"\n"
"3. Housing Bubble:\n"
"    -> Housing prices soared due to high demand fueled by easy credit.\n"
"    -> Borrowers believed housing prices would continue to rise, making it easier to refinance or sell at a profit.\n"
"\n"
"8.2 - The Collapse of Major Financial Institutions\n"
"- Lehman Brothers Bankruptcy:\n"
"    -> In September 2008, Lehman Brothers, a major investment bank, filed for bankruptcy due to massi"
                        "ve losses in mortgage-backed securities.\n"
"- Other Institutions Affected:\n"
"    -> Bear Stearns, Merrill Lynch, AIG, and others faced severe financial distress.\n"
"\n"
"8.3 - Government Interventions and Bailouts\n"
"- Emergency Measures:\n"
"    -> Governments worldwide injected capital into banks and financial systems to prevent total collapse.\n"
"- Key Actions in the U.S.:\n"
"    -> Troubled Asset Relief Program (TARP):\n"
"       - A $700 billion bailout plan to purchase toxic assets from banks.\n"
"- Federal Reserve Policies:\n"
"    -> Lowered interest rates and provided emergency lending facilities.\n"
"\n"
"8.4 - Effects on Global Markets and Economies\n"
"- Stock Market Declines:\n"
"    -> Major indices like the Dow Jones Industrial Average and S&P 500 saw significant drops.\n"
"- Economic Recession:\n"
"    -> Global economies entered a recession marked by high unemployment and reduced consumer spending.\n"
"- Credit Crunch:\n"
"    -> Banks became hesitant to lend, making it difficult for bu"
                        "sinesses and individuals to obtain loans.\n"
"\n"
"8.5 - Lessons Learned and Regulatory Changes**\n"
"1. Importance of Financial Oversight:\n"
"    -> The crisis highlighted the need for better regulation of financial institutions and markets.\n"
"\n"
"2. Regulatory Reforms:\n"
"- Dodd-Frank Act (2010):\n"
"    -> Implemented comprehensive financial reforms to increase transparency and reduce risk.\n"
"    -> Created the Consumer Financial Protection Bureau (CFPB) to protect consumers from unfair lending practices.\n"
"\n"
"3. Risk Management:\n"
"    -> Emphasis on the importance of understanding and managing financial risks, both by institutions and individual investors.\n"
"\n"
"9 - Conclusion\n"
"Understanding how the stock market works and how major events can impact market movements is crucial for any investor or trader. The 2008 financial crisis serves as a significant example of how interconnected the global financial system is and the importance of informed decision-making.", nullptr));
        RETURNBTN_2->setText(QCoreApplication::translate("Widget", "Return", nullptr));
        mod2text->setPlainText(QCoreApplication::translate("Widget", "Module 2: Basics of Stock Trading\n"
"\n"
"1 - Types of Stocks\n"
"1.1 - Common vs. Preferred Stocks\n"
"Common Stocks: When you purchase common stock, you're buying a piece of ownership in a company. Common shareholders have voting rights, allowing them to influence corporate decisions like electing the board of directors. Dividends may be paid out to common stockholders, but they are not guaranteed and can fluctuate based on the company's profitability.\n"
"\n"
"Preferred Stocks: Preferred stockholders have a higher claim on assets and earnings than common shareholders. They usually receive fixed dividends and are paid out before common shareholders in the event of liquidation. However, preferred stocks typically do not come with voting rights.\n"
"\n"
"1.2 - Blue-Chip Stocks\n"
"Blue-chip stocks are shares of large, well-established, and financially sound companies with a history of reliable performance. These companies are leaders in their industries and are known for their quality products or services. Co"
                        "mpanies like Apple, Microsoft, and Coca-Cola are considered blue-chip stocks due to their market dominance and consistent earnings.\n"
"\n"
"1.3 - Penny Stocks\n"
"Penny stocks refer to shares of small companies that trade at low prices, typically under $5 per share. They are often not listed on major exchanges and trade over-the-counter. Penny stocks are highly speculative and carry significant risk due to low liquidity, limited disclosure, and higher volatility.\n"
"\n"
"2 - Stock Exchanges\n"
"2.1 - Major Exchanges (NYSE and NASDAQ)\n"
"New York Stock Exchange (NYSE): The NYSE is the world's largest stock exchange by market capitalization. It operates as an auction market, where trades occur directly between buyers and sellers.\n"
"\n"
"NASDAQ: An electronic marketplace known for its high concentration of technology stocks. It operates as a dealer market, where trades are executed via a network of dealers or market makers.\n"
"\n"
"2.2 - How Exchanges Facilitate Trading\n"
"Exchanges provide a regulated pla"
                        "tform where stocks are bought and sold. They ensure fair trading practices, transparency, and efficient price discovery by matching buy and sell orders.\n"
"\n"
"2.3 - Role of Market Makers\n"
"Market makers are firms or individuals that buy and sell securities at specified prices to facilitate liquidity in the market. They ensure there's enough volume of trading so that trades can be executed quickly, helping to prevent drastic price changes due to supply and demand imbalances.\n"
"\n"
"3 - How to Buy and Sell Stocks\n"
"3.1 - Setting Up a Brokerage Account\n"
"Choosing a Broker -> Select a brokerage firm that suits your needs, considering factors like fees, investment options, and customer service.\n"
"\n"
"Account Types -> Decide between different types of accounts such as individual, joint, or retirement accounts.\n"
"\n"
"Verification -> Complete the application process, which may require personal identification and financial information.\n"
"\n"
"3.2 - Market Orders vs. Limit Orders\n"
"Market Orders are"
                        " an instruction to buy or sell a stock immediately at the best available current price. Execution is guaranteed, but the price is not. Limit orders are an order to buy or sell a stock at a specific price or better, where execution is not guaranteed, but you have control over the price.\n"
"\n"
"3.3 - Introduction to Online Trading Platforms\n"
"Features: Online platforms offer tools for trading, research, portfolio tracking, and educational resources.\n"
"Benefits: Convenience, lower fees, and the ability to execute trades quickly from anywhere.\n"
"\n"
"4 - Reading Stock Information\n"
"4.1 - Ticker Symbols\n"
"Ticker symbols unique series of letters assigned to a security for trading purposes, such as \"AAPL\" for Apple Inc., \"TSLA\" for Tesla Inc., and \"NVDA\" for Nvidia.\n"
"\n"
"4.2 - Understanding Stock Quotes\n"
"Last Price => The most recent price at which the stock traded.\n"
"Change -> The difference in price from the previous day's closing.\n"
"Open -> The price at which the stock opened trading f"
                        "or the day.\n"
"High/Low -> The highest and lowest prices at which the stock has traded during the day.\n"
"\n"
"4.3 - Bid and Ask Prices\n"
"Bid Price -> The highest price a buyer is willing to pay for a stock.\n"
"Ask Price -> The lowest price a seller is willing to accept.\n"
"Spread -> The difference between the bid and ask prices, representing the transaction cost and market liquidity.\n"
"\n"
"4.4 - Market Indices (Dow Jones, S&P 500)\n"
"The Dow Jones Industrial Average (DJIA) tracks 30 large, publicly-owned companies based in the United States, representing various industries, whereas the S&P 500 measures stock performance of 500 large companies listed on exchanges in the U.S., serving as an indicator of the overall stock market health.\n"
"\n"
"5 - The Role of Brokers in Stock Trading\n"
"Brokers act as intermediaries between investors and the stock market, executing buy and sell orders on behalf of clients. Some brokers offer investment advice, research, and portfolio management services. Brokers cha"
                        "rge fees for their services, which can be based on per-trade commissions or account management fees, typically percentage-based.\n"
"\n"
"6 - Understanding Trading Costs\n"
"Commissions -> Fees charged by brokers for executing a trade.\n"
"Bid-Ask Spread -> The indirect cost of trading, representing the difference between the buying and selling prices.\n"
"Other Fees -> May include account maintenance fees, withdrawal fees, or inactivity fees.\n"
"\n"
"7 - Risks and Rewards in Stock Trading\n"
"Potential Gains -> Investors may earn returns through price appreciation and dividends.\n"
"Market Risk -> The possibility of losing some or all of the original investment due to market fluctuations.\n"
"Volatility -> Stocks can be volatile, leading to rapid changes in stock prices.\n"
"Diversification -> Spreading investments across various assets to mitigate risk.\n"
"\n"
"8 - Conclusion\n"
"Understanding the basics of stock trading is essential for anyone looking to invest in the stock market. By familiarizing yourse"
                        "lf with the types of stocks, how exchanges operate, the process of buying and selling, and interpreting stock information, you lay a strong foundation for making informed trades and investment decisions.", nullptr));
        mod2header->setText(QCoreApplication::translate("Widget", "Mod 2 - Trading Basics", nullptr));
        RETURNBTN_3->setText(QCoreApplication::translate("Widget", "Return", nullptr));
        mod2header_2->setText(QCoreApplication::translate("Widget", "Mod 3 - Fundamental Analysis", nullptr));
        mod2text_2->setPlainText(QCoreApplication::translate("Widget", "Module 3: Fundamental Analysis\n"
"\n"
"1 - Understanding Financial Statements\n"
"1.1 - Income Statements\n"
"An income statement summarizes a company's revenues and expenses over a specific period, showing how the company performed financially, and has the following components:\n"
"Revenue -> Total income from sales of goods or services.\n"
"Expenses -> Costs incurred in earning the revenue, including operating expenses and taxes.\n"
"Net Income -> The profit after all expenses have been deducted from revenue.\n"
"\n"
"1.2 - Balance Sheets\n"
"Balance sheets are a snapshot of a company's financial position at a specific point in time, detailing assets, liabilities, and shareholders' equity, consisting of:\n"
"Assets -> What the company owns (cash, inventory, property).\n"
"Liabilities -> What the company owes (loans, accounts payable).\n"
"Shareholders' Equity -> The residual interest in the assets after deducting liabilities.\n"
"\n"
"1.3 - Cash Flow Statements\n"
"These show how changes in the balance shee"
                        "t and income affect cash and cash equivalents, breaking down analysis into operating, investing, and financing activities:\n"
"Operating Activities -> Cash generated from core business operations.\n"
"Investing Activities -> Cash used for investing in assets or received from the sale of assets.\n"
"Financing Activities -> Cash received from or paid to investors and creditors.\n"
"\n"
"2 - Key Financial Ratios\n"
"2.1 - Price-to-Earnings (P/E) Ratio\n"
"Definition -> Measures a company's current share price relative to its per-share earnings.\n"
"Calculation -> P/E Ratio = Market Value per Share / Earnings per Share (EPS).\n"
"Interpretation -> A higher P/E ratio may indicate that the stock is overvalued, or investors expect high growth rates in the future.\n"
"\n"
"2.2 - Earnings per Share (EPS)\n"
"Definition -> Indicates a company's profitability allocated to each outstanding share of common stock.\n"
"Calculation -> EPS = (Net Income - Preferred Dividends) / Average Outstanding Shares.\n"
"Significance -> H"
                        "igher EPS suggests better profitability.\n"
"\n"
"2.3 - Return on Equity (ROE)\n"
"Definition -> Measures a corporation's profitability by revealing how much profit a company generates with the money shareholders have invested.\n"
"Calculation -> ROE = Net Income / Shareholders' Equity.\n"
"Interpretation -> Higher ROE indicates efficient use of equity capital.\n"
"\n"
"2.4 - Debt-to-Equity Ratio\n"
"Definition -> Indicates the relative proportion of shareholders' equity and debt used to finance a company's assets.\n"
"Calculation -> Debt-to-Equity Ratio = Total Liabilities / Shareholders' Equity.\n"
"Significance -> A higher ratio implies more leverage and financial risk.\n"
"\n"
"3 - Evaluating Company Performance\n"
"3.1 - Revenue Growth\n"
"Consistent revenue growth suggests a company's products or services are in demand.\n"
"Considerations: Compare revenue growth to industry peers and economic conditions.\n"
"\n"
"3.2 - Profit Margins\n"
"Gross Margin -> (Revenue - Cost of Goods Sold) / Revenue.\n"
"Opera"
                        "ting Margin -> Operating Income / Revenue.\n"
"Net Margin -> Net Income / Revenue.\n"
"Interpretation -> Higher margins indicate better efficiency and profitability.\n"
"\n"
"3.3 - Analyzing Expenses and Costs\n"
"Cost Control -> Evaluate how well a company manages its operating expenses relative to revenue.\n"
"Expense Trends: Rising expenses without corresponding revenue increases can signal potential issues.\n"
"\n"
"4 - Qualitative Factors\n"
"4.1 - Management Effectiveness\n"
"Leadership Quality -> Strong, experienced leadership can drive a company's success.\n"
"Corporate Governance -> Effective policies and practices ensure accountability and transparency.\n"
"\n"
"4.2 - Competitive Advantage\n"
"Unique Selling Proposition -> What sets the company apart from competitors.\n"
"Barriers to Entry -> Patents, brand recognition, or economies of scale that protect the company from new competitors.\n"
"\n"
"4.3 - Industry Position\n"
"Market Share -> The company's portion of sales in its industry.\n"
"Industry "
                        "Trends -> Understanding the dynamics, challenges, and growth potential within the industry.\n"
"\n"
"5 - The Importance of Fundamental Analysis\n"
"Fundamental investment analysis helps determine a stock's intrinsic value and whether it is undervalued or overvalued. A long-term perspective focuses on a company's ability to generate earnings over time, supporting long-term investment strategies.\n"
"\n"
"6 - Limitations of Fundamental Analysis\n"
"Market Efficiency -> The market may have already priced in all available information.\n"
"Unpredictable Factors -> Economic downturns, regulatory changes, or unforeseen events can impact a company's performance.\n"
"\n"
"7 - Combining Quantitative and Qualitative Analysis\n"
"Holistic Approach -> Using both numerical data and qualitative insights provides a more comprehensive evaluation of a company's potential.\n"
"Risk Assessment -> Identifies potential risks that may not be evident through financial ratios alone.\n"
"\n"
"8 - Conclusion\n"
"Fundamental analysis is "
                        "a critical tool for investors aiming to make informed decisions. By understanding financial statements, key ratios, and qualitative factors, you can evaluate a company's true worth and growth prospects, aligning your investments with your financial goals.", nullptr));
        RETURNBTN_5->setText(QCoreApplication::translate("Widget", "Return", nullptr));
        mod2header_4->setText(QCoreApplication::translate("Widget", "Mod 2 - Trading Basics", nullptr));
        mod2text_4->setPlainText(QCoreApplication::translate("Widget", "Module 2: Basics of Stock Trading\n"
"\n"
"1 - Types of Stocks\n"
"1.1 - Common vs. Preferred Stocks\n"
"Common Stocks: When you purchase common stock, you're buying a piece of ownership in a company. Common shareholders have voting rights, allowing them to influence corporate decisions like electing the board of directors. Dividends may be paid out to common stockholders, but they are not guaranteed and can fluctuate based on the company's profitability.\n"
"\n"
"Preferred Stocks: Preferred stockholders have a higher claim on assets and earnings than common shareholders. They usually receive fixed dividends and are paid out before common shareholders in the event of liquidation. However, preferred stocks typically do not come with voting rights.\n"
"\n"
"1.2 - Blue-Chip Stocks\n"
"Blue-chip stocks are shares of large, well-established, and financially sound companies with a history of reliable performance. These companies are leaders in their industries and are known for their quality products or services. Co"
                        "mpanies like Apple, Microsoft, and Coca-Cola are considered blue-chip stocks due to their market dominance and consistent earnings.\n"
"\n"
"1.3 - Penny Stocks\n"
"Penny stocks refer to shares of small companies that trade at low prices, typically under $5 per share. They are often not listed on major exchanges and trade over-the-counter. Penny stocks are highly speculative and carry significant risk due to low liquidity, limited disclosure, and higher volatility.\n"
"\n"
"2 - Stock Exchanges\n"
"2.1 - Major Exchanges (NYSE and NASDAQ)\n"
"New York Stock Exchange (NYSE): The NYSE is the world's largest stock exchange by market capitalization. It operates as an auction market, where trades occur directly between buyers and sellers.\n"
"\n"
"NASDAQ: An electronic marketplace known for its high concentration of technology stocks. It operates as a dealer market, where trades are executed via a network of dealers or market makers.\n"
"\n"
"2.2 - How Exchanges Facilitate Trading\n"
"Exchanges provide a regulated pla"
                        "tform where stocks are bought and sold. They ensure fair trading practices, transparency, and efficient price discovery by matching buy and sell orders.\n"
"\n"
"2.3 - Role of Market Makers\n"
"Market makers are firms or individuals that buy and sell securities at specified prices to facilitate liquidity in the market. They ensure there's enough volume of trading so that trades can be executed quickly, helping to prevent drastic price changes due to supply and demand imbalances.\n"
"\n"
"3 - How to Buy and Sell Stocks\n"
"3.1 - Setting Up a Brokerage Account\n"
"Choosing a Broker -> Select a brokerage firm that suits your needs, considering factors like fees, investment options, and customer service.\n"
"\n"
"Account Types -> Decide between different types of accounts such as individual, joint, or retirement accounts.\n"
"\n"
"Verification -> Complete the application process, which may require personal identification and financial information.\n"
"\n"
"3.2 - Market Orders vs. Limit Orders\n"
"Market Orders are"
                        " an instruction to buy or sell a stock immediately at the best available current price. Execution is guaranteed, but the price is not. Limit orders are an order to buy or sell a stock at a specific price or better, where execution is not guaranteed, but you have control over the price.\n"
"\n"
"3.3 - Introduction to Online Trading Platforms\n"
"Features: Online platforms offer tools for trading, research, portfolio tracking, and educational resources.\n"
"Benefits: Convenience, lower fees, and the ability to execute trades quickly from anywhere.\n"
"\n"
"4 - Reading Stock Information\n"
"4.1 - Ticker Symbols\n"
"Ticker symbols unique series of letters assigned to a security for trading purposes, such as \"AAPL\" for Apple Inc., \"TSLA\" for Tesla Inc., and \"NVDA\" for Nvidia.\n"
"\n"
"4.2 - Understanding Stock Quotes\n"
"Last Price => The most recent price at which the stock traded.\n"
"Change -> The difference in price from the previous day's closing.\n"
"Open -> The price at which the stock opened trading f"
                        "or the day.\n"
"High/Low -> The highest and lowest prices at which the stock has traded during the day.\n"
"\n"
"4.3 - Bid and Ask Prices\n"
"Bid Price -> The highest price a buyer is willing to pay for a stock.\n"
"Ask Price -> The lowest price a seller is willing to accept.\n"
"Spread -> The difference between the bid and ask prices, representing the transaction cost and market liquidity.\n"
"\n"
"4.4 - Market Indices (Dow Jones, S&P 500)\n"
"The Dow Jones Industrial Average (DJIA) tracks 30 large, publicly-owned companies based in the United States, representing various industries, whereas the S&P 500 measures stock performance of 500 large companies listed on exchanges in the U.S., serving as an indicator of the overall stock market health.\n"
"\n"
"5 - The Role of Brokers in Stock Trading\n"
"Brokers act as intermediaries between investors and the stock market, executing buy and sell orders on behalf of clients. Some brokers offer investment advice, research, and portfolio management services. Brokers cha"
                        "rge fees for their services, which can be based on per-trade commissions or account management fees, typically percentage-based.\n"
"\n"
"6 - Understanding Trading Costs\n"
"Commissions -> Fees charged by brokers for executing a trade.\n"
"Bid-Ask Spread -> The indirect cost of trading, representing the difference between the buying and selling prices.\n"
"Other Fees -> May include account maintenance fees, withdrawal fees, or inactivity fees.\n"
"\n"
"7 - Risks and Rewards in Stock Trading\n"
"Potential Gains -> Investors may earn returns through price appreciation and dividends.\n"
"Market Risk -> The possibility of losing some or all of the original investment due to market fluctuations.\n"
"Volatility -> Stocks can be volatile, leading to rapid changes in stock prices.\n"
"Diversification -> Spreading investments across various assets to mitigate risk.\n"
"\n"
"8 - Conclusion\n"
"Understanding the basics of stock trading is essential for anyone looking to invest in the stock market. By familiarizing yourse"
                        "lf with the types of stocks, how exchanges operate, the process of buying and selling, and interpreting stock information, you lay a strong foundation for making informed trades and investment decisions.", nullptr));
        RETURNBTN_4->setText(QCoreApplication::translate("Widget", "Return", nullptr));
        mod2header_3->setText(QCoreApplication::translate("Widget", "Mod 2 - Trading Basics", nullptr));
        mod2text_3->setPlainText(QCoreApplication::translate("Widget", "Module 2: Basics of Stock Trading\n"
"\n"
"1 - Types of Stocks\n"
"1.1 - Common vs. Preferred Stocks\n"
"Common Stocks: When you purchase common stock, you're buying a piece of ownership in a company. Common shareholders have voting rights, allowing them to influence corporate decisions like electing the board of directors. Dividends may be paid out to common stockholders, but they are not guaranteed and can fluctuate based on the company's profitability.\n"
"\n"
"Preferred Stocks: Preferred stockholders have a higher claim on assets and earnings than common shareholders. They usually receive fixed dividends and are paid out before common shareholders in the event of liquidation. However, preferred stocks typically do not come with voting rights.\n"
"\n"
"1.2 - Blue-Chip Stocks\n"
"Blue-chip stocks are shares of large, well-established, and financially sound companies with a history of reliable performance. These companies are leaders in their industries and are known for their quality products or services. Co"
                        "mpanies like Apple, Microsoft, and Coca-Cola are considered blue-chip stocks due to their market dominance and consistent earnings.\n"
"\n"
"1.3 - Penny Stocks\n"
"Penny stocks refer to shares of small companies that trade at low prices, typically under $5 per share. They are often not listed on major exchanges and trade over-the-counter. Penny stocks are highly speculative and carry significant risk due to low liquidity, limited disclosure, and higher volatility.\n"
"\n"
"2 - Stock Exchanges\n"
"2.1 - Major Exchanges (NYSE and NASDAQ)\n"
"New York Stock Exchange (NYSE): The NYSE is the world's largest stock exchange by market capitalization. It operates as an auction market, where trades occur directly between buyers and sellers.\n"
"\n"
"NASDAQ: An electronic marketplace known for its high concentration of technology stocks. It operates as a dealer market, where trades are executed via a network of dealers or market makers.\n"
"\n"
"2.2 - How Exchanges Facilitate Trading\n"
"Exchanges provide a regulated pla"
                        "tform where stocks are bought and sold. They ensure fair trading practices, transparency, and efficient price discovery by matching buy and sell orders.\n"
"\n"
"2.3 - Role of Market Makers\n"
"Market makers are firms or individuals that buy and sell securities at specified prices to facilitate liquidity in the market. They ensure there's enough volume of trading so that trades can be executed quickly, helping to prevent drastic price changes due to supply and demand imbalances.\n"
"\n"
"3 - How to Buy and Sell Stocks\n"
"3.1 - Setting Up a Brokerage Account\n"
"Choosing a Broker -> Select a brokerage firm that suits your needs, considering factors like fees, investment options, and customer service.\n"
"\n"
"Account Types -> Decide between different types of accounts such as individual, joint, or retirement accounts.\n"
"\n"
"Verification -> Complete the application process, which may require personal identification and financial information.\n"
"\n"
"3.2 - Market Orders vs. Limit Orders\n"
"Market Orders are"
                        " an instruction to buy or sell a stock immediately at the best available current price. Execution is guaranteed, but the price is not. Limit orders are an order to buy or sell a stock at a specific price or better, where execution is not guaranteed, but you have control over the price.\n"
"\n"
"3.3 - Introduction to Online Trading Platforms\n"
"Features: Online platforms offer tools for trading, research, portfolio tracking, and educational resources.\n"
"Benefits: Convenience, lower fees, and the ability to execute trades quickly from anywhere.\n"
"\n"
"4 - Reading Stock Information\n"
"4.1 - Ticker Symbols\n"
"Ticker symbols unique series of letters assigned to a security for trading purposes, such as \"AAPL\" for Apple Inc., \"TSLA\" for Tesla Inc., and \"NVDA\" for Nvidia.\n"
"\n"
"4.2 - Understanding Stock Quotes\n"
"Last Price => The most recent price at which the stock traded.\n"
"Change -> The difference in price from the previous day's closing.\n"
"Open -> The price at which the stock opened trading f"
                        "or the day.\n"
"High/Low -> The highest and lowest prices at which the stock has traded during the day.\n"
"\n"
"4.3 - Bid and Ask Prices\n"
"Bid Price -> The highest price a buyer is willing to pay for a stock.\n"
"Ask Price -> The lowest price a seller is willing to accept.\n"
"Spread -> The difference between the bid and ask prices, representing the transaction cost and market liquidity.\n"
"\n"
"4.4 - Market Indices (Dow Jones, S&P 500)\n"
"The Dow Jones Industrial Average (DJIA) tracks 30 large, publicly-owned companies based in the United States, representing various industries, whereas the S&P 500 measures stock performance of 500 large companies listed on exchanges in the U.S., serving as an indicator of the overall stock market health.\n"
"\n"
"5 - The Role of Brokers in Stock Trading\n"
"Brokers act as intermediaries between investors and the stock market, executing buy and sell orders on behalf of clients. Some brokers offer investment advice, research, and portfolio management services. Brokers cha"
                        "rge fees for their services, which can be based on per-trade commissions or account management fees, typically percentage-based.\n"
"\n"
"6 - Understanding Trading Costs\n"
"Commissions -> Fees charged by brokers for executing a trade.\n"
"Bid-Ask Spread -> The indirect cost of trading, representing the difference between the buying and selling prices.\n"
"Other Fees -> May include account maintenance fees, withdrawal fees, or inactivity fees.\n"
"\n"
"7 - Risks and Rewards in Stock Trading\n"
"Potential Gains -> Investors may earn returns through price appreciation and dividends.\n"
"Market Risk -> The possibility of losing some or all of the original investment due to market fluctuations.\n"
"Volatility -> Stocks can be volatile, leading to rapid changes in stock prices.\n"
"Diversification -> Spreading investments across various assets to mitigate risk.\n"
"\n"
"8 - Conclusion\n"
"Understanding the basics of stock trading is essential for anyone looking to invest in the stock market. By familiarizing yourse"
                        "lf with the types of stocks, how exchanges operate, the process of buying and selling, and interpreting stock information, you lay a strong foundation for making informed trades and investment decisions.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
