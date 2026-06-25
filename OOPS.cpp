#include <iostream>
#include <string>
using namespace std;

// class Teacher {

//     // We use getters and setters for accessing private attributes and methods
// private:           
//     double salary;

// public:
//     string name;
//     string subject;
//     string dept;
    
//     void setSalary (int s) {
//         salary = s;
//     }

//     double getSalary () {
//         return salary;
//     }

//     // Method
//     void changeDept (string newDept) {
//         dept = newDept;
//     }

//     void teacherDetails () {
//         cout << "Name: " << name << endl;
//         cout << "Subject: " << subject << endl;
//         cout << "Department: " << dept << endl;
//         cout << "Salary: " << getSalary() << endl;
//     }
// };

// int main () {

//     Teacher t1;
//     t1.name = "Humayun Sarfraz";
//     t1.subject = "Physiology";
//     t1.dept = "Medicine";
//     t1.setSalary(46000);
//     t1.getSalary();

//     // t1.teacherDetails();

//     t1.changeDept("MBBS");
//     t1.teacherDetails();

// }


class Teacher {

    // We use getters and setters for accessing private attributes and methods
private:           
    double salary;

public:

    string name;
    string subject;
    string dept;

    Teacher(string n, string sub, string d, double sal) {
        name = n;
        subject = sub;
        dept = d;
        salary = sal;
    }
    
    void setSalary (int s) {
        salary = s;
    }

    double getSalary () {
        return salary;
    }

    // Method
    void changeDept (string newDept) {
        dept = newDept;
    }

    void teacherDetails () {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

// int main () {

//    Teacher t1 = Teacher("Humayun Sarfraz", "Embryology", "Medicine", 29000);
//    Teacher t2 = Teacher("Maria Sarfraz", "Gastrology", "Surgery", 70000);
//    t1.teacherDetails();
//    t2.teacherDetails();

// }


// #Inheritance


class Person { 
public:

    string name;
    int age;

    Person (string name, int age) {
        // cout << "I am Person's constructor" << endl;
        this->name = name;
        this->age = age;
    }
};

class Student: public Person {
public:
    int rollno;

    void getInfo () {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Num: " << rollno << endl; 
    }

    Student(string name, int age, int rollno) : Person(name, age) {
        // cout << "I am a undergrad student" << endl;
        this->rollno = rollno;
    }
};

// Multiple Inheritance

class gradStudent : public Student {
public:
    string researchArea;

    gradStudent(string name, int age, int rollno, string researchArea) : Student(name, age, rollno) {
        // cout << "I am research Student" << endl;
        this->researchArea = researchArea;
    }
};

int main () {
    gradStudent gs1("Humayun", 23, 1234, "Medicine");
    gs1.getInfo();
    
}