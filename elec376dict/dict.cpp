#include "dict.h"

// Constructor
Dict::Dict() {
    dict = std::unordered_map<std::string, std::vector<Definition>>();
    students = std::unordered_map<int, Student>();
}

// Add a word to the dictionary
void Dict::addWord(const std::string &word, const std::string &meaning, const std::string &module) {
    Definition def = {meaning, module};
    dict[word].push_back(def);
}

// Remove a word from the dictionary
void Dict::removeWord(const std::string &word) {
    dict.erase(word);
}

// Register a new student
void Dict::registerStudent(int studentID) {
    students[studentID] = {studentID, {}};
}

// Mark a module as completed for a student
void Dict::completeModule(int studentID, const std::string &module) {
    if (students.find(studentID) != students.end()) {
        students[studentID].completedModules.insert(module);
    }
}

// Get the first meaning of a word visible to the student
std::string Dict::getMeaning(const std::string &word, int studentID) const {
    if (dict.find(word) == dict.end()) {
        return "Definition not found.";
    } else {
        for (const auto &def : dict.at(word)) {
            if (students.at(studentID).completedModules.find(def.module) != students.at(studentID).completedModules.end()) {
                return def.meaning;
            }
        }
        return "No definition available for this student.";
    }
}

// Display all words and their meanings visible to a student
void Dict::displayAllDefinitions(int studentID) const {
    if (students.find(studentID) == students.end()) {
        std::cout << "Student not found.\n";
        return;
    }

    for (const auto &entry : dict) {
        std::cout << entry.first << ":\n";
        for (const auto &def : entry.second) {
            if (students.at(studentID).completedModules.find(def.module) != students.at(studentID).completedModules.end()) {
                std::cout << "- " << def.meaning << " (Module: " << def.module << ")\n";
            }
        }
    }
}

// Save the dictionary and student data to a file
void Dict::saveToFile(const std::string &filename) const {
    std::ofstream file(filename);

    for (const auto &entry : dict) {
        file << entry.first << "\n";
        for (const auto &def : entry.second) {
            file << def.meaning << "\n" << def.module << "\n";
        }
    }

    for (const auto &student : students) {
        file << "Student: " << student.second.studentID << "\n";
        for (const auto &module : student.second.completedModules) {
            file << module << "\n";
        }
    }

    file.close();
}

// Load the dictionary and student data from a file
void Dict::loadFromFile(const std::string &filename) {
    std::ifstream file(filename);
    std::string word, meaning, module;

    while (std::getline(file, word)) {
        if (word.rfind("Student:", 0) == 0) {
            int studentID = std::stoi(word.substr(8));
            Student student{studentID, {}};

            while (std::getline(file, module) && !module.empty()) {
                student.completedModules.insert(module);
            }

            students[studentID] = student;
        } else {
            std::vector<Definition> definitions;

            while (std::getline(file, meaning) && std::getline(file, module)) {
                definitions.push_back({meaning, module});
            }

            dict[word] = definitions;
        }
    }

    file.close();
}
