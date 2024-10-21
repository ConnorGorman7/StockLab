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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
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
    QPushButton *mod6;
    QPushButton *mod8;
    QPushButton *mod1;
    QPushButton *mod3;
    QPushButton *mod4;
    QProgressBar *advProgress;
    QPushButton *mod15;
    QPushButton *mod2;
    QProgressBar *interProgress;
    QPushButton *mod9;
    QLabel *introductoryLabel;
    QLabel *advancedLabel;
    QProgressBar *beginProgress;
    QPushButton *mod5;
    QPushButton *mod7;
    QPushButton *mod13;
    QPushButton *mod10;
    QPushButton *mod11;
    QPushButton *mod14;
    QLabel *intermediateLabel;
    QPushButton *mod12;
    QLabel *moduleWelcome;
    QWidget *module1;
    QGridLayout *gridLayout;
    QLabel *label_25;
    QPushButton *RETURNBTN;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QLabel *label_26;
    QWidget *module2;
    QGridLayout *gridLayout_3;
    QPushButton *RETURNBTN_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(11, 11, 787, 581));
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
        moduleStack->setGeometry(QRect(-1, -1, 765, 581));
        moduleHomepage = new QWidget();
        moduleHomepage->setObjectName("moduleHomepage");
        gridLayout_2 = new QGridLayout(moduleHomepage);
        gridLayout_2->setObjectName("gridLayout_2");
        mod6 = new QPushButton(moduleHomepage);
        mod6->setObjectName("mod6");
        mod6->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod6, 6, 1, 1, 1);

        mod8 = new QPushButton(moduleHomepage);
        mod8->setObjectName("mod8");
        mod8->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod8, 8, 1, 1, 1);

        mod1 = new QPushButton(moduleHomepage);
        mod1->setObjectName("mod1");
        mod1->setMinimumSize(QSize(0, 40));
        mod1->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(mod1, 6, 0, 1, 1);

        mod3 = new QPushButton(moduleHomepage);
        mod3->setObjectName("mod3");
        mod3->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod3, 8, 0, 1, 1);

        mod4 = new QPushButton(moduleHomepage);
        mod4->setObjectName("mod4");
        mod4->setMinimumSize(QSize(0, 40));
        mod4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        gridLayout_2->addWidget(mod4, 9, 0, 1, 1);

        advProgress = new QProgressBar(moduleHomepage);
        advProgress->setObjectName("advProgress");
        advProgress->setValue(0);

        gridLayout_2->addWidget(advProgress, 11, 2, 1, 1);

        mod15 = new QPushButton(moduleHomepage);
        mod15->setObjectName("mod15");
        mod15->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod15, 10, 2, 1, 1);

        mod2 = new QPushButton(moduleHomepage);
        mod2->setObjectName("mod2");
        mod2->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod2, 7, 0, 1, 1);

        interProgress = new QProgressBar(moduleHomepage);
        interProgress->setObjectName("interProgress");
        interProgress->setValue(0);

        gridLayout_2->addWidget(interProgress, 11, 1, 1, 1);

        mod9 = new QPushButton(moduleHomepage);
        mod9->setObjectName("mod9");
        mod9->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod9, 9, 1, 1, 1);

        introductoryLabel = new QLabel(moduleHomepage);
        introductoryLabel->setObjectName("introductoryLabel");
        introductoryLabel->setMaximumSize(QSize(16777215, 25));
        QFont font4;
        font4.setBold(true);
        introductoryLabel->setFont(font4);
        introductoryLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(introductoryLabel, 5, 0, 1, 1);

        advancedLabel = new QLabel(moduleHomepage);
        advancedLabel->setObjectName("advancedLabel");
        advancedLabel->setMaximumSize(QSize(16777215, 25));
        advancedLabel->setFont(font4);
        advancedLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(advancedLabel, 5, 2, 1, 1);

        beginProgress = new QProgressBar(moduleHomepage);
        beginProgress->setObjectName("beginProgress");
        beginProgress->setValue(0);

        gridLayout_2->addWidget(beginProgress, 11, 0, 1, 1);

        mod5 = new QPushButton(moduleHomepage);
        mod5->setObjectName("mod5");
        mod5->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod5, 10, 0, 1, 1);

        mod7 = new QPushButton(moduleHomepage);
        mod7->setObjectName("mod7");
        mod7->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod7, 7, 1, 1, 1);

        mod13 = new QPushButton(moduleHomepage);
        mod13->setObjectName("mod13");
        mod13->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod13, 8, 2, 1, 1);

        mod10 = new QPushButton(moduleHomepage);
        mod10->setObjectName("mod10");
        mod10->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod10, 10, 1, 1, 1);

        mod11 = new QPushButton(moduleHomepage);
        mod11->setObjectName("mod11");
        mod11->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod11, 6, 2, 1, 1);

        mod14 = new QPushButton(moduleHomepage);
        mod14->setObjectName("mod14");
        mod14->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod14, 9, 2, 1, 1);

        intermediateLabel = new QLabel(moduleHomepage);
        intermediateLabel->setObjectName("intermediateLabel");
        intermediateLabel->setFont(font4);
        intermediateLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(intermediateLabel, 5, 1, 1, 1);

        mod12 = new QPushButton(moduleHomepage);
        mod12->setObjectName("mod12");
        mod12->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(mod12, 7, 2, 1, 1);

        moduleWelcome = new QLabel(moduleHomepage);
        moduleWelcome->setObjectName("moduleWelcome");
        moduleWelcome->setMaximumSize(QSize(16777215, 30));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        moduleWelcome->setFont(font5);
        moduleWelcome->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(moduleWelcome, 4, 0, 1, 3);

        moduleStack->addWidget(moduleHomepage);
        module1 = new QWidget();
        module1->setObjectName("module1");
        gridLayout = new QGridLayout(module1);
        gridLayout->setObjectName("gridLayout");
        label_25 = new QLabel(module1);
        label_25->setObjectName("label_25");
        label_25->setFont(font5);

        gridLayout->addWidget(label_25, 0, 1, 1, 1, Qt::AlignmentFlag::AlignTop);

        RETURNBTN = new QPushButton(module1);
        RETURNBTN->setObjectName("RETURNBTN");

        gridLayout->addWidget(RETURNBTN, 0, 0, 1, 1);

        scrollArea = new QScrollArea(module1);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 741, 519));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(740, 0, 20, 521));
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);
        label_26 = new QLabel(scrollAreaWidgetContents);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(250, 240, 63, 20));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 2);

        moduleStack->addWidget(module1);
        module2 = new QWidget();
        module2->setObjectName("module2");
        gridLayout_3 = new QGridLayout(module2);
        gridLayout_3->setObjectName("gridLayout_3");
        RETURNBTN_2 = new QPushButton(module2);
        RETURNBTN_2->setObjectName("RETURNBTN_2");

        gridLayout_3->addWidget(RETURNBTN_2, 0, 0, 1, 1);

        moduleStack->addWidget(module2);
        stackedWidget->addWidget(moduleWidget);

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
        mod6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod8->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod1->setText(QCoreApplication::translate("Widget", "M1 - Basic Intuition", nullptr));
        mod3->setText(QCoreApplication::translate("Widget", "M3 - Fundamental Analysis", nullptr));
        mod4->setText(QCoreApplication::translate("Widget", "M4 - Intro to Investment Strategies", nullptr));
        mod15->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod2->setText(QCoreApplication::translate("Widget", "M2 - Trading Basics", nullptr));
        mod9->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        introductoryLabel->setText(QCoreApplication::translate("Widget", "Introductory", nullptr));
        advancedLabel->setText(QCoreApplication::translate("Widget", "Advanced", nullptr));
        mod5->setText(QCoreApplication::translate("Widget", "M5 - ?", nullptr));
        mod7->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod13->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod10->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod11->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        mod14->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        intermediateLabel->setText(QCoreApplication::translate("Widget", "Intermediate", nullptr));
        mod12->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        moduleWelcome->setText(QCoreApplication::translate("Widget", "Module Home - Are you ready to learn?", nullptr));
        label_25->setText(QCoreApplication::translate("Widget", "Mod 1 - Understanding Market Movements and Major Events", nullptr));
        RETURNBTN->setText(QCoreApplication::translate("Widget", "Return", nullptr));
        label_26->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        RETURNBTN_2->setText(QCoreApplication::translate("Widget", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
