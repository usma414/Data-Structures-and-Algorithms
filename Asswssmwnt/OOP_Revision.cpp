
#include <iostream>
using namespace std;

class AutoVehicle{
private:

    int id;
    double speed;
    double battery;

public:

    AutoVehicle(int i, double spd, double bat): id(i), speed(spd), battery(bat){};

    int getVehicleId() {
        return id;
    }

    double getSpeed(){
        return speed;
    }

    double getBattery(){
        return battery;
    }

     virtual void increaseSpeed(double amount){
        speed += amount;
    }

    void displaydetails() {

        cout << "Vehicle Id: " << getVehicleId()<< endl;
        cout<< "Speed: "<< getSpeed() << endl;
        cout<< "Battery: " << getBattery()<< endl; 
    }

};


class GroundRobot : public AutoVehicle{
private:
    int wheelCount;
    double sensorRange;

public: 

    GroundRobot(int i, double sp, double bat, int wc, double sr): AutoVehicle(i, sp, bat), wheelCount(wc), sensorRange(sr){};

    int getWheelCount() {
        return wheelCount;
    }

    double getSensorRange() {
        return sensorRange;
    }

    
    void increaseSpeed(double amount){
        AutoVehicle::increaseSpeed(amount);
    }


    void displayDetails() {
        AutoVehicle::displaydetails();
        cout<< "Wheel Count: "<< getWheelCount() << endl;
        cout<< "Sensor Range: "<< getSensorRange() << " miles" << endl;

    }
};


class Drone : public AutoVehicle{
private:
    double currAltitude;
    double maxAltitude;

public:
    Drone(int i, double spd, double bat, double ca, double ma) : AutoVehicle(i, spd, bat), currAltitude(ca), maxAltitude(ma){};

    double getCurrentAltitude(){
        return currAltitude;
    }

    double getMaxAltitude(){
        return maxAltitude;
    }

    void displayDetails(){
        AutoVehicle::displaydetails();
        cout<< "Current Altitude: "<< getCurrentAltitude() << " ft high" << endl;
        cout<< "Maximum Altitude: " << getMaxAltitude() << " ft high"<< endl;
    }

    void increaseSpeed(double amount){
        if(currAltitude > 100){
            AutoVehicle::increaseSpeed(amount / 2);
        } else {
            AutoVehicle::increaseSpeed(amount);
        }
    }


};

int main(){

    // GroundRobot rover(01, 20, 60, 4, 50);
    // rover.increaseSpeed(50);
    // rover.displayDetails();
    // Drone drone(02, 40, 20, 150, 500);
    // drone.increaseSpeed(30);
    // drone.displayDetails();

    AutoVehicle* v1 = new GroundRobot(01, 20, 60, 4, 50);
    AutoVehicle* v2 = new Drone(02, 40, 20, 150, 500);

    v1->increaseSpeed(5);
    v2->increaseSpeed(30);

    v1->displaydetails();
    v2->displaydetails();
}