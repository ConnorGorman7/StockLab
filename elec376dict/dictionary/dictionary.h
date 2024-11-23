#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>

// Struct to hold definition data with its associated module
struct Definition {
    std::string meaning;
    std::string module; // Module this definition belongs to
};

// Struct to hold student data
struct Student {
    int studentID;
    std::unordered_set<std::string> completedModules; // Track completed modules
};

// Dict Class
class Dict {
public:
    std::unordered_map<std::string, std::vector<Definition>> dict; // Dictionary storing words and definitions
    std::unordered_map<int, Student> students;                    // Mapping studentID to student data

    Dict();

    // Add a word with its meaning and associated module
    void addWord(const std::string &word, const std::string &meaning, const std::string &module);

    // Mark a module as completed for a student
    void completeModule(int studentID, const std::string &module);
};

namespace Ui {
class Dictionary;
}

class Dictionary : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dictionary(QWidget *parent = nullptr);
    ~Dictionary();

private slots:
    void on_registerStudentButton_clicked();
    void on_markCompletedButton_clicked();
    void on_markUncompletedButton_clicked();
    void on_showModulesButton_clicked();
    void on_getDefinitionButton_clicked();

private:
    Ui::Dictionary *ui;
    Dict dictionary; // Instance of the Dict class
};

#endif // DICTIONARY_H
