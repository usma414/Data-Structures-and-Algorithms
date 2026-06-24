#include <iostream>
#include <string>
using namespace std;

class Teacher {

    // We use getters and setters for accessing private attributes and methods
private:           
    double salary;

public:
    string name;
    string subject;
    string dept;
    
    // Method
    void changeDept (string newDept) {
        dept = newDept;
    }

    void teacherDetails () {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main () {

    Teacher t1;
    t1.name = "Humayun Sarfraz";
    t1.subject = "Physiology";
    t1.dept = "Medicine";
   

    t1.teacherDetails();

    t1.changeDept("MBBS");
    t1.teacherDetails();

}