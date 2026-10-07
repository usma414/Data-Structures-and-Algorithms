#include<iostream>
#include <string>
using namespace std;

class Solution{
public:

    int findMax(int arr[], int size){

        int maxNum = arr[0];
        for(int i = 0; i < size; ++i){

            if(arr[i] > maxNum){
                maxNum = arr[i];
            }
        }

        return maxNum;

    }

    int findMin(int arr[], int size){

        int minNum = arr[0];

        for(int i = 1; i < size; ++i){

            if(arr[i] < minNum){
                minNum = arr[i];
            }
        }

        return minNum;

    }


    int countOccurrences(int arr[], int size, int target){

        int count = 0;

        for(int i = 0; i < size; ++i) {

            if(arr[i] == target){
                count ++;
            }
        }
        return count;
    }

    int countEven(int arr[], int size){

        int count = 0;

        for(int i = 0; i < size; ++i) {

            if(arr[i] % 2 == 0){
                count ++;
            }
        }
        return count;
    }

};

class BankAccount{
private:

    int balance;

public:

    BankAccount(double initialBalance) : balance(initialBalance){};

    void deposit(double amount){
        balance += amount;
    }

    int getBalance(){
        return balance;
    }
};



class Circle{
private:

    double radius;

public: 

    Circle(double r): radius(r){};

    double getradius(){
        return radius;
    }
};

class Sphere : public Circle {
public:
 
    Sphere(double r): Circle(r){};

    double getVolume(){

        double volume = 4 / 3 * (3.142 * getradius());
        return volume;
    }

};



class Animal{
private:

    string name;

public:

    Animal(string n) : name(n){};

    string getName(){
        return name;
    }
};


class Dog : public Animal{
public:

    Dog(string name): Animal(name){};

};




class Vehicle{
private:
    string brand;
    int model;
    int year;
    double speed;
    int fuelLevel;

public:

    Vehicle(string br, int mod, int yr, double spd, int fL): brand(br), model(mod), year(yr), speed(spd), fuelLevel(fL){};

    string getBrand(){
        return brand;
    }

    int getModel(){
        return model;
    }

    int getYear(){
        return year;
    }

    void increaseSpeed(double amount){
        speed += amount;
    }

    void decreaseSpeed(double amount){
        if(currentSpeed() > 0 && currentSpeed() >= amount){
            speed -= amount;
        } else {
            speed = 0;
        }
    }

    double currentSpeed(){
        return speed;
    }

    void addFuel(int fuelAmount){
        fuelLevel += fuelAmount;
    }

    int getFuelLevel(){
        return fuelLevel;
    }

    void displayDetails(){

        cout<< "Brand: "<< getBrand() << endl;
        cout<< "Model: "<< getModel()<< endl;
        cout<< "Year: "<< getYear() << endl;
        cout<< "Current Speed: "<< currentSpeed()<< endl;
        cout<< "Current Fuel: "<< getFuelLevel() << " litres"<< endl;
    }
};

class Car: public Vehicle{
private:
    int noOfDoors;
    bool isAutomatic;
public:

    Car(string br, int mod, int yr, double spd, int fuell, int doors, bool automatic) : Vehicle(br, mod, yr, spd, fuell), noOfDoors(doors), isAutomatic(automatic){};

    int getDoors(){
        return noOfDoors;
    }

    bool isAuto(){
        return isAutomatic;
    }

    void displayDetails(){
        Vehicle:: displayDetails();
        cout<< "No. of Doors: "<< getDoors() <<  endl;
        cout<< "Is Automatic: "<< isAuto() << endl;
    }

};


class Employee{
private:

    string name;
    int employeeID;
    double salary;

public:

    Employee(string n, int empid, double sal): name(n), employeeID(empid), salary(sal){};

    string getName(){
        return name;
    }

    int getEmployeeID(){
        return employeeID;
    }

    double getSalary(){
        return salary;
    }

    void increaseSalary(double amount){
        salary += amount;
    }

    void displayEmpDetails(){

        cout << "Employee Name: "<< getName() << endl;
        cout << "Employee ID: "<< getEmployeeID() << endl;
        cout << "Salary: "<< getSalary() << endl;
    }
};

class Manager: public Employee{
private:
    string department;
    int noOFEmployees;

public:
    Manager(string n, int empid, double sal, string dep, int noE): Employee(n, empid, sal), department(dep), noOFEmployees(noE){};

    string getDepartment(){
        return department;
    }

    int getNoofEmployees(){
        return noOFEmployees;
    }

    void displayDetails(){
        Employee::displayEmpDetails();
        cout<< "Department: "<< getDepartment()<< endl;
        cout<< "No of Employees: "<< getNoofEmployees()<< endl;
    }


};





int main() {

    // Solution obj;
    // int arr[] = {17,-4,4,9,3};
    // int result = obj.findMax(arr, 5);
    // int minn = obj.findMin(arr,5);
    // int counter = obj.countOccurrences(arr,5, 3);
    // int evenCount = obj.countEven(arr, 5);
    
    // cout<< result << " "<< endl;
    // cout<< "Min: "<< minn << endl;
    // cout<< "Count: "<< counter<< endl;
    // cout<< "Even Count: "<< evenCount<< endl;


    // BankAccount account1(1500);
    // account1.deposit(600);
    // cout<< "Current balance: "<< account1.getBalance();

    // Sphere s1(5);
    // cout<< "Sphere radius: " << s1.getradius()<< endl;
    // cout << "Volume: "<< s1.getVolume()<< endl;
    
    // Dog d1("Milo");
    // cout<< "Dog's Name: " << d1.getName()<< endl;



    // Car c1("Toyota",2023, 2026, 20, 30, 4, true);
    // c1.increaseSpeed(40);
    // c1.displayDetails();

    Manager m1("Ali", 01, 30000, "Engineering", 10);
    m1.displayDetails();
}