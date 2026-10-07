
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


    void displaydetails(){

        cout << "Vehicle Id: cd " 
    }

};

class GroundRobot : public AutoVehicle{
private:
    int wheelCount;
    double sensorRange;

public: 

    GroundRobot(int i, double sp, double bat, int wc, double sr): AutoVehicle(i, sp, bat), wheelCount(wc), sensorRange(sr){};

    int getWheelCount(){
        return wheelCount;
    }

    double getSensorRange(){
        return sensorRange;
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

};

int main(){

    GroundRobot rover(01, 20, 60, 4, 50)
}