#include <iostream>
#include <vector>


//get the teacher class from the proper file


//from the teacher class retrieve the class

//now get the student being graded

//get the module being graded
class Module{
    //temporary till we get back end for the modules
};

//make a grader class which is able to change grades for students
class Grader{
    private:
    double grade, maxMarks, studentMark;
    std::string studentName, feedback, letterGrade;
    int studentID;
    Module* module;
    
    Module* getModule(){
        //function that gets the module information (ie storing a pointer to teh module instance)
    }
    std :: string convertToLetterGrade(){
        grade *= 100; //convert to percentage
        if(grade> 100 ||grade < 0){
            std::cout << "Invalid grade!\n";
            return "";
        }
         else if (grade >= 90) {
            if (grade >= 97) return "A+";
                else if (grade >= 93) return "A";
                else return "A-";
        } 
        else if (grade >= 80) {
            if (grade >= 87) return "B+";
                else if (grade >= 83) return "B";
                else return "B-";
        } 
        else if (grade >= 70) {
            if (grade >= 77) return "C+";
                else if (grade >= 73) return "C";
                else return "C-";
        }    
        else if (grade >= 60) {
            if (grade >= 67) return "D+";
                else if (grade >= 63) return "D";
                else return "D-";
        } 
        else {
            return "F";
        }
    }
    public:
    std:: string getLetterGrade(){
        letterGrade = convertToLetterGrade();
        if(!letterGrade.empty()){
            return letterGrade;
        }
    }
        Grader(double g) : grade(g) {
            module = getModule(); //SOMETHING WRONG HERE WILL FIGURE OUT LATER
};
void main(){

    //get the student id and name from the database based on which student is being viewed in qt
    //get the module that is being graded (depends on what the user selected in qt)
    //
    Grader grading (); //input grade from the qt ui
}
//get the answers of the student and apply a grade to them

//get the long answers from the student and get input from the ui
//to apply the grade to that question
//add the grades to get a fial grade and store it in the student class