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


// class Person { 
// public:

//     string name;
//     int age;

//     Person (string name, int age) {
//         // cout << "I am Person's constructor" << endl;
//         this->name = name;
//         this->age = age;
//     }
// };

// class Student: public Person {
// public:
//     int rollno;

//     void getInfo () {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll Num: " << rollno << endl; 
//     }

//     Student(string name, int age, int rollno) : Person(name, age) {
//         // cout << "I am a undergrad student" << endl;
//         this->rollno = rollno;
//     }
// };

// // Multiple Inheritance

// class gradStudent : public Student {
// public:
//     string researchArea;

//     gradStudent(string name, int age, int rollno, string researchArea) : Student(name, age, rollno) {
//         // cout << "I am research Student" << endl;
//         this->researchArea = researchArea;
//     }
// };

// int main () {
//     gradStudent gs1("Humayun", 23, 1234, "Medicine");
//     gs1.getInfo();
    
// }



// Inheritance Practice

// class Person {
// public:
//     string name;
//     int age;

//     Person(string name, int age) {
//         this->name = name;
//         this->age = age;
//     }
// };

// class Player : public Person {
// public:
//     int jerseyNum;
//     string position;

//     Player(string name, int age, int jerseyNum, string position) : Person(name, age) {
//         this->jerseyNum = jerseyNum;
//         this->position = position;
//     }
// };

// class Captain : public Player {
// public:
//     int yearsAsCaptain;

//     Captain(string name, int age, int jerseyNum, string position, int yearsAsCaptain) : Player (name, age, jerseyNum, position) {
//         this->yearsAsCaptain = yearsAsCaptain;
//     }

//     void getInfo () {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "JerseyNumber: " << jerseyNum << endl;
//         cout << "Position: " << position << endl;
//         cout << "Years as Captain: " << yearsAsCaptain << endl; 
//     }
// };

// int main () {
//     Captain c1("Humayun", 23, 10, "CAM", 2);
//     Captain c2("Lionel Messi", 39, 10, "RW", 16);
//     Captain c3("F.De Jong", 29, 21, "CDM", 5);
//     c1.getInfo();
//     c2.getInfo();
//     c3.getInfo();
// }


// class Device {
// public:
    
//     string name;
//     string company;

//     Device (string name, string company) {
//         this->name = name;
//         this->company = company;
//     }

//     ~Device () {
//         cout << "Device Destructor called" << endl;
//     }

// };

// class Laptop : public Device  {
// public: 

//     string processor;
//     int RAM;

//     Laptop (string name, string company, string processor, int RAM) : Device (name, company) {
//         this->processor = processor;
//         this->RAM = RAM;
//     }

//     ~Laptop () {
//         cout << "Laptop Destructor called" << endl;
//     }

//     void getInfo () {
//         cout << "Device name: " << name << endl;
//         cout << "Device Company: " << company << endl;
//         cout << "Processor: " << processor << endl;
//         cout << "RAM: " << RAM << endl;
//     }
// };

// int main () {

//     Laptop l1("Laptop", "DELL", "Core i5", 16);
//     Laptop l2("Mobile Phone", "Apple", "ios", 256);

//     l1.getInfo();
//     l2.getInfo();
// }




// Child inheritingg from Multiple Parents-----Multiple Inheritance 

// class Student {
// public:
//     string name;
//     int rollno;

//     Student (string name, int rollno) {
//         this->name = name;
//         this->rollno = rollno;
//     }
// };

// class Teacher {
// public:
//     string subject;
//     double salary;

//     Teacher (string subject, double salary) {
//         this->subject = subject;
//         this->salary = salary;
//     }
// };

// class TA : public Student, public Teacher {
// public:
//     TA(string name, int rollno, string subject, double salary): Student(name, rollno), Teacher(subject, salary) {
       
//     }

//     void getInfo () {
//         cout << "Name: " << name << endl;
//         cout << "Rollno: " << rollno << endl;
//         cout << "Subject: " << subject << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main () {

//     TA t1("Humayun", 2341, "Medicine", 35000);
//     t1.getInfo();
// }



//  Hierarchial Inheritance


// class Person {
// public:
//     string name;
//     int age;

//     Person (string name, int age) {
//         this->name = name;
//         this->age = age;
//     }

//     virtual void getInfo() {
//          cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }

// };

// class Student : public Person {
// public: 
//     int rollno;

//     Student(string name, int age, int rollno) : Person (name, age) {
//         this->rollno = rollno;
//     }

//     void getInfo () {
//         Person::getInfo();
//         cout << "Roll No: " << rollno << endl;
//     }
// };

// class Teacher : public Person {
// public: 
//     string subject;
    
//     Teacher(string name, int age, string subject): Person(name, age) {
//         this->subject = subject;
//     }

//     void getInfo () override {
//         Person::getInfo();
//         cout << "Subject: " << subject << endl;
//     }
// };

// int main () {
//     Student s1("Humayun", 23, 2341);
//     Teacher t1("Ali", 34, "Chemistry");
//     t1.getInfo();
//     s1.getInfo();
// }


// class Shape {
//     virtual void draw();
// };

// class Circle : public Shape {
//     public: 
//        void draw() {
//             cout << "Drawing a circle\n";
//         }
// };

// class Rectangle: public Shape {
//     public:
//         void draw() {
//             cout << "Drawing Rectangle\n";
//         }
// };

// int main () {
//     Circle c1;
//     c1.draw();
//     return 0;
// }


// class Employee {
// public:

//     virtual void calculateSalary() {
//         cout << "Calculating salary";
//     }
// };

// class Manager : public Employee {
// public: 

//     void calculateSalary () {
//         cout << "Employees salary" << endl;
//     }
// };

// class Developer : public Employee {
// public:

//     void calculateSalary () {
//         cout << "Developer salary" << endl;
//     }
// };

// int main () {
//     Manager m1;
//     m1.calculateSalary();
//     Developer d1;
//     d1.calculateSalary();
// }


// Revising all Concepts in one go till now

class Book {
public:

    string title;
    string author;
    double price;

    Book() {
        cout << "Book Constructor here" << endl;
    }

    Book(string title, string author, double price) {
        this->title = title;
        this->author = author;
        this-> price = price;
    }
};

class Circle {
public: 
    double radius;

    Circle() {
        cout << "Area to be Calculated" << endl;
    }

    Circle (double radius) {
        this->radius = radius;
    }

    void area () {
        double area = 2 * 3.14 * radius;
        cout << "Area of circle is: " << area << endl;
    }
};

class Vehicle {
public:

    string model;
    string name;

    Vehicle (string model, string name) {
        this->model = model;
        this->name = name;
    }

    virtual void getInfo() {
        cout << "Model: " << model << endl;
        cout << "Name: " << name << endl;
    }
};

class Car : public Vehicle {
public:

    int doors;
    string fueltype;

    Car (string model, string name, int doors, string fueltype) : Vehicle (model, name) {
        this->doors = doors;
        this->fueltype = fueltype;
    }

    void getInfo() override {
        Vehicle :: getInfo();
        cout << "Doors: " << doors << endl;
        cout << "Fueltype: " << fueltype << endl;
    }
    
};

class Animal {
public: 
    string animalName;

    Animal (string animalName) {
        this->animalName = animalName;
    }

    void eat() {
        cout << animalName << " is eating" << endl;
    }

    void sleep() {
        cout << animalName << " is sleeping" << endl;
    }

    virtual void sound() = 0;

    virtual ~Animal () {
        cout << "Animal Destructor " << endl;
    } 
};

class Cat : public Animal {
public: 

    Cat(string animalName) : Animal(animalName) {

    }
    void play() {
        cout << animalName << " is playing" << endl;
    }

    void sound() override {
        cout << animalName << " is meowing" << endl;
    }
};

class Dog : public Animal {
public:

    Dog(string animalName) : Animal(animalName) {

    }
    void sound() override {
        cout << animalName << " is barking " << endl;
    }
};

class Lion : public Animal{
public: 

    Lion(string animalName) : Animal(animalName) {
        
    }
    void sound() override {
        cout << animalName << "Lion is roaring" << endl;
    }

    void hunt(){
        cout<< animalName << " is hunting" << endl;
    }
};



int main () {

    Circle();
    Circle c1(4.5);
    c1.area();
    Book();
    Book b1("Man vs Maths", "Ali Rehman", 4.67);
    cout << b1.author << endl;
    cout << b1.price << endl;

    Car car1("Toyota", "Prius", 4, "Hybrid");
    car1.getInfo();

    Cat cat1("Milo");
    cat1.eat();
    cat1.play();
    cat1.sleep();
    cat1.sound();

    Dog dog1("Snowy");
    dog1.eat();
    dog1.sleep();
    dog1.sound();

    Lion lion1("Cheetah");
    lion1.eat();
    lion1.sleep();
    lion1.sound();
    lion1.hunt();


}



