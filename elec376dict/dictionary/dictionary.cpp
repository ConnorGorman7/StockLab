#include "dictionary.h"
#include "ui_dictionary.h"

Dictionary::Dictionary(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dictionary)
{
    ui->setupUi(this);

    // Connect buttons to their respective slots
    connect(ui->markCompletedButton, &QPushButton::clicked, this, &Dictionary::on_registerStudentButton_clicked);
    connect(ui->markCompletedButton, &QPushButton::clicked, this, &Dictionary::on_markCompletedButton_clicked);
    connect(ui->markUncompletedButton, &QPushButton::clicked, this, &Dictionary::on_markUncompletedButton_clicked);
    connect(ui->showModulesButton, &QPushButton::clicked, this, &Dictionary::on_showModulesButton_clicked);
    connect(ui->getDefinitionButton, &QPushButton::clicked, this, &Dictionary::on_getDefinitionButton_clicked);
}

Dictionary::~Dictionary()
{
    delete ui;
}

// Slot to register a new student
void Dictionary::on_registerStudentButton_clicked()
{
    int studentID = ui->studentIDinput->text().toInt();
    if (studentID == 0) {
        ui->definitionResultOutput->setText("Invalid student ID.");
        return;
    }
    dictionary.registerStudent(studentID);
    ui->definitionResultOutput->setText("Student registered successfully!");
    ui->studentIDinput->clear();
}

// Slot to mark a module as completed for a student
void Dictionary::on_markCompletedButton_clicked()
{
    // Retrieve the Student ID and Module inputs
    QString studentIDInput = ui->studentIDinput->text().trimmed(); // Bottom input field
    QString moduleInput = ui->lineEdit->text().trimmed();          // Module input field

    // Debugging: Print the inputs
    qDebug() << "Student ID Input:" << studentIDInput;
    qDebug() << "Module Input:" << moduleInput;

    // Validate the Student ID field
    if (studentIDInput.isEmpty()) {
        ui->confirmOutput->setPlainText("Student ID is empty. Please enter a valid Student ID.");
        return; // Do not clear inputs on validation error
    }

    // Validate the Module field
    if (moduleInput.isEmpty()) {
        ui->confirmOutput->setPlainText("Module is empty. Please enter a module number.");
        return; // Do not clear inputs on validation error
    }

    // Convert Student ID to integer
    bool isNumeric;
    int studentID = studentIDInput.toInt(&isNumeric);

    // Validate the converted Student ID
    if (!isNumeric || studentID <= 0) {
        ui->confirmOutput->setPlainText("Invalid Student ID. Please enter a positive numeric ID.");
        return; // Do not clear inputs on validation error
    }

    // Check if the student exists in the dictionary
    if (dictionary.students.find(studentID) == dictionary.students.end()) {
        ui->confirmOutput->setPlainText("Student not found. Please register the student first.");
        return; // Do not clear inputs on validation error
    }

    // Mark the module as completed
    dictionary.completeModule(studentID, moduleInput.toStdString());
    ui->confirmOutput->setPlainText("Module '" + moduleInput + "' marked as completed for Student ID: " + QString::number(studentID));

    // Clear the Module input field only after successful action
    ui->lineEdit->clear();
}





// Slot to remove a module from the completed list for a student
void Dictionary::on_markUncompletedButton_clicked()
{
    QString studentIDInput = ui->studentIDinput->text().trimmed(); // Bottom input field for Student ID
    QString moduleInput = ui->lineEdit->text().trimmed();          // Input field for Module

    if (studentIDInput.isEmpty()) {
        ui->confirmOutput->setPlainText("Student ID is empty. Please enter a valid Student ID.");
        return;
    }

    if (moduleInput.isEmpty()) {
        ui->confirmOutput->setPlainText("Module is empty. Please enter a module number.");
        return;
    }

    bool isNumeric;
    int studentID = studentIDInput.toInt(&isNumeric);

    if (!isNumeric || studentID <= 0) {
        ui->confirmOutput->setPlainText("Invalid Student ID. Please enter a positive numeric ID.");
        return;
    }

    // Check if the student exists
    if (dictionary.students.find(studentID) == dictionary.students.end()) {
        ui->confirmOutput->setPlainText("Student not found. Please register the student first.");
        return;
    }

    // Remove the module from the completed list
    if (dictionary.students[studentID].completedModules.erase(moduleInput.toStdString())) {
        ui->confirmOutput->setPlainText("Module '" + moduleInput + "' removed for Student ID: " + QString::number(studentID));
    } else {
        ui->confirmOutput->setPlainText("Module '" + moduleInput + "' not found for Student ID: " + QString::number(studentID));
    }

    // Clear input fields
    ui->lineEdit->clear();
}



// Slot to show all completed modules for a student
void Dictionary::on_showModulesButton_clicked()
{
    QString studentIDInput = ui->studentIDforModule->text().trimmed(); // Middle input field
    if (studentIDInput.isEmpty()) {
        ui->completedModulesList->setPlainText("Student ID is empty. Please enter a valid Student ID.");
        return;
    }

    bool isNumeric;
    int studentID = studentIDInput.toInt(&isNumeric);

    if (!isNumeric || studentID <= 0) {
        ui->completedModulesList->setPlainText("Invalid Student ID. Please enter a positive numeric ID.");
        return;
    }

    if (dictionary.students.find(studentID) == dictionary.students.end()) {
        ui->completedModulesList->setPlainText("Student not found. Please register the student first.");
        return;
    }

    QString modules;
    for (const auto &module : dictionary.students[studentID].completedModules) {
        modules += QString::fromStdString(module) + "\n";
    }

    ui->completedModulesList->setPlainText(modules.isEmpty() ? "No modules completed yet." : modules);
}




// Slot to display definitions for all completed modules for a student
void Dictionary::on_getDefinitionButton_clicked()
{
    QString studentIDInput = ui->getDefinitionStudentIDInput->text().trimmed(); // Top input field
    if (studentIDInput.isEmpty()) {
        ui->definitionResultOutput->setPlainText("Student ID is empty. Please enter a valid Student ID.");
        return;
    }

    bool isNumeric;
    int studentID = studentIDInput.toInt(&isNumeric);

    if (!isNumeric || studentID <= 0) {
        ui->definitionResultOutput->setPlainText("Invalid Student ID. Please enter a positive numeric ID.");
        return;
    }

    if (dictionary.students.find(studentID) == dictionary.students.end()) {
        ui->definitionResultOutput->setPlainText("Student not found. Please register the student first.");
        return;
    }

    QString definitions;
    for (const auto &entry : dictionary.dict) {
        for (const auto &def : entry.second) {
            if (dictionary.students[studentID].completedModules.find(def.module) != dictionary.students[studentID].completedModules.end()) {
                definitions += QString::fromStdString(entry.first) + ": " + QString::fromStdString(def.meaning) + "\n";
            }
        }
    }

    ui->definitionResultOutput->setPlainText(definitions.isEmpty() ? "No definitions available." : definitions);
}

