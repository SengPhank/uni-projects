#include "AirFleet.h"
#include "Helicopter.h"
#include "Airplane.h"
// private:
//     /* creates an air fleet containing pointers to 5 AirVehicle objects as an array; 
//     */
//     int numVs;
//     AirVehicle** fleet;

/*
When the constructor is called, it should create and add the following objects to fleet:

Airplane(20, 10);
Helicopter(10000, "BlackHawk"); 
AirVehicle(5000);
Helicopter(100, "WhiteHawk");
Airplane(15, 20);
*/
AirFleet::AirFleet(/* args */) {
    this->fleet = new AirVehicle*[5];

    this->fleet[0] = new Airplane(20, 10);
    this->fleet[1] = new Helicopter(10000, "BlackHawk");
    this->fleet[2] = new AirVehicle(5000);
    this->fleet[3] = new Helicopter(100, "WhiteHawk");
    this->fleet[4] = new Airplane(15, 20);
}
AirFleet::~AirFleet() {
    for (int i = 0; i < 5; i++) {
        delete this->fleet[i];
    }
    delete[] this->fleet;
}

AirVehicle** AirFleet::get_fleet() {
    return this->fleet;
}      // returns the array of pointers to the five AirVehicle objects
    

