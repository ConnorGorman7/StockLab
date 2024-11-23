#include "widget.h"
#include "ui_widget.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QRandomGenerator>


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
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->loginPage));
}


void Widget::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->welcomePage));
}


void Widget::on_backButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->welcomePage));
}


void Widget::on_backButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->welcomePage));
}


void Widget::on_regStuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->studentReg));
}


void Widget::on_regTeachButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->teacherReg));
}


void Widget::on_registerStudentBtn_clicked()
{
    QString filePath = "C:/Users/trist/OneDrive/Documents/376 sprint 1/code/Elec376_F24_group2/users.txt";
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
            ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->welcomePage));
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
    QString filePath = "C:/Users/trist/OneDrive/Documents/376 sprint 1/code/Elec376_F24_group2/users.txt";
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
            ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->welcomePage));
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
    QString filePath = "C:/Users/trist/OneDrive/Documents/376 sprint 1/code/Elec376_F24_group2/users.txt";
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
                        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->studentHome));
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
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->welcomePage));
}

void Widget::on_menu_clicked()
{
    ui->moduleStack->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->studentHome));
}

void Widget::on_modules_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->moduleWidget));
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
    ui->mod1stack->setCurrentIndex(ui->mod1stack->indexOf(ui->mod1quiz));
}

void Widget::on_quizButton2_clicked()
{
    ui->mod2stack->setCurrentIndex(ui->mod2stack->indexOf(ui->mod2quiz));
}

void Widget::on_quizButton3_clicked()
{
    ui->mod3stack->setCurrentIndex(ui->mod3stack->indexOf(ui->mod3quiz));
}

void Widget::on_quizButton4_clicked()
{
    ui->mod4stack->setCurrentIndex(ui->mod4stack->indexOf(ui->mod4quiz));
}

void Widget::on_quizButton5_clicked()
{
    ui->mod5stack->setCurrentIndex(ui->mod5stack->indexOf(ui->mod5quiz));
}

void Widget::on_quizButton6_clicked()
{
    ui->mod6stack->setCurrentIndex(ui->mod6stack->indexOf(ui->mod6quiz));
}

void Widget::on_quizButton7_clicked()
{
    ui->mod7stack->setCurrentIndex(ui->mod7stack->indexOf(ui->mod7quiz));
}

void Widget::on_quizButton8_clicked()
{
    ui->mod8stack->setCurrentIndex(ui->mod8stack->indexOf(ui->mod8quiz));
}

void Widget::on_quizButton9_clicked()
{
    ui->mod9stack->setCurrentIndex(ui->mod9stack->indexOf(ui->mod9quiz));
}

void Widget::resetQuiz(QWidget *quizContainer)
{
    // find all QRadioButton elements that are children of the provided container
    QList<QRadioButton *> radioButtons = quizContainer->findChildren<QRadioButton *>();

    // iterate through the list and uncheck each QRadioButton
    for (QRadioButton *radioButton : radioButtons) {
        // disable auto-exclusivity, uncheck, and re-enable auto-exclusivity to reset properly
        radioButton->setAutoExclusive(false);
        radioButton->setChecked(false);
        radioButton->setAutoExclusive(true);
    }
}

bool q1Complete = false;
void Widget::on_submitQuiz1_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("M1Q1A2_C");
    QRadioButton *q2 = findChild<QRadioButton *>("M1Q2A3_C");
    QRadioButton *q3 = findChild<QRadioButton *>("M1Q3A4_C");
    QRadioButton *q4 = findChild<QRadioButton *>("M1Q4A3_C");
    QRadioButton *q5 = findChild<QRadioButton *>("M1Q5A1_C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q1Complete == false) { ui->beginProgress->setValue(ui->beginProgress->value() + 33); }
        q1Complete = true;
        ui->mod1->setText("M1 - Basic Intuition - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod1quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q2Complete = false;
void Widget::on_submitQuiz2_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("M2Q1A4_C");
    QRadioButton *q2 = findChild<QRadioButton *>("M2Q2A2_C");
    QRadioButton *q3 = findChild<QRadioButton *>("M2Q3A1_C");
    QRadioButton *q4 = findChild<QRadioButton *>("M2Q4A3_C");
    QRadioButton *q5 = findChild<QRadioButton *>("M2Q5A3_C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q2Complete == false) { ui->beginProgress->setValue(ui->beginProgress->value() + 33); }
        q2Complete = true;
        ui->mod2->setText("M2 - Trading Basics - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod2quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q3Complete = false;
void Widget::on_submitQuiz3_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("M3Q1A4_C");
    QRadioButton *q2 = findChild<QRadioButton *>("M3Q2A4_C");
    QRadioButton *q3 = findChild<QRadioButton *>("M3Q3A1_C");
    QRadioButton *q4 = findChild<QRadioButton *>("M3Q4A2_C");
    QRadioButton *q5 = findChild<QRadioButton *>("M3Q5A3_C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q3Complete == false) { ui->beginProgress->setValue(ui->beginProgress->value() + 34); }
        q3Complete = true;
        ui->mod3->setText("M3 - Fundamental Analysis - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod3quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q4Complete = false;
void Widget::on_submitQuiz4_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("Q1A4_4C");
    QRadioButton *q2 = findChild<QRadioButton *>("Q2A1_4C");
    QRadioButton *q3 = findChild<QRadioButton *>("Q3A1_4C");
    QRadioButton *q4 = findChild<QRadioButton *>("Q4A3_4C");
    QRadioButton *q5 = findChild<QRadioButton *>("Q5A4_4C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q4Complete == false) { ui->interProgress->setValue(ui->interProgress->value() + 33); }
        q4Complete = true;
        ui->mod4->setText("M4 - Technical Analysis - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod4quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q5Complete = false;
void Widget::on_submitQuiz5_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("Q1A1_5C");
    QRadioButton *q2 = findChild<QRadioButton *>("Q2A4_5C");
    QRadioButton *q3 = findChild<QRadioButton *>("Q3A3_5C");
    QRadioButton *q4 = findChild<QRadioButton *>("Q4A4_5C");
    QRadioButton *q5 = findChild<QRadioButton *>("Q5A4_5C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q5Complete == false) { ui->interProgress->setValue(ui->interProgress->value() + 33); }
        q5Complete = true;
        ui->mod5->setText("M5 - Risk Management - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod5quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q6Complete = false;
void Widget::on_submitQuiz6_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("Q1A4_6C");
    QRadioButton *q2 = findChild<QRadioButton *>("Q2A3_6C");
    QRadioButton *q3 = findChild<QRadioButton *>("Q3A2_6C");
    QRadioButton *q4 = findChild<QRadioButton *>("Q4A4_6C");
    QRadioButton *q5 = findChild<QRadioButton *>("Q5A1_6C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q6Complete == false) { ui->interProgress->setValue(ui->interProgress->value() + 34); }
        q6Complete = true;
        ui->mod6->setText("M6 - Trading Strategies - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod6quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q7Complete = false;
void Widget::on_submitQuiz7_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("Q1A4_7C");
    QRadioButton *q2 = findChild<QRadioButton *>("Q2A3_7C");
    QRadioButton *q3 = findChild<QRadioButton *>("Q3A1_7C");
    QRadioButton *q4 = findChild<QRadioButton *>("Q4A4_7C");
    QRadioButton *q5 = findChild<QRadioButton *>("Q5A2_7C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q7Complete == false) { ui->advProgress->setValue(ui->advProgress->value() + 33); }
        q7Complete = true;
        ui->mod7->setText("M7 - Advanced Analysis - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod7quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q8Complete = false;
void Widget::on_submitQuiz8_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("Q1A4_8C");
    QRadioButton *q2 = findChild<QRadioButton *>("Q2A1_8C");
    QRadioButton *q3 = findChild<QRadioButton *>("Q3A4_8C");
    QRadioButton *q4 = findChild<QRadioButton *>("Q4A2_8C");
    QRadioButton *q5 = findChild<QRadioButton *>("Q5A3_8C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q8Complete == false) { ui->advProgress->setValue(ui->advProgress->value() + 33); }
        q8Complete = true;
        ui->mod8->setText("M8 - Derivatives && Options - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod8quiz);
    ui->moduleStack->setCurrentIndex(0);
}

bool q9Complete = false;
void Widget::on_submitQuiz9_clicked()
{
    int score = 0;

    QRadioButton *q1 = findChild<QRadioButton *>("Q1A4_9C");
    QRadioButton *q2 = findChild<QRadioButton *>("Q2A3_9C");
    QRadioButton *q3 = findChild<QRadioButton *>("Q3A1_9C");
    QRadioButton *q4 = findChild<QRadioButton *>("Q4A4_9C");
    QRadioButton *q5 = findChild<QRadioButton *>("Q5A3_9C");

    if (q1 && q1->isChecked()) { score+=20; }
    if (q2 && q2->isChecked()) { score+=20; }
    if (q3 && q3->isChecked()) { score+=20; }
    if (q4 && q4->isChecked()) { score+=20; }
    if (q5 && q5->isChecked()) { score+=20; }

    QString message;
    if (score >= 60) {
        message = QString("Congratulations! You passed the quiz!\nYou got a %1%.").arg(score);
        if(q9Complete == false) { ui->advProgress->setValue(ui->advProgress->value() + 34); }
        q9Complete = true;
        ui->mod9->setText("M9 - Portfolio Management - ✓");
    } else {
        message = QString("Unfortunately, you did not pass the quiz.\nYou got a %1%. Please try again.").arg(score);
    }
    QMessageBox::information(this, "Quiz Result", message);

    resetQuiz(ui->mod9quiz);
    ui->moduleStack->setCurrentIndex(0);
}

void Widget::on_adminInfo_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->adminPage));
}

void Widget::on_adminInfoBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->studentHome));
}



void Widget::on_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->settingPage));
}


void Widget::on_settingBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->indexOf(ui->studentHome));
}

