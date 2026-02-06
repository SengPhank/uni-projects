#include <string>
#include "Vehicle.h"
// Car, Bus, Motorbike
Vehicle::Vehicle() {
    this->timeOfEntry = time(0);
    this->ID = 0;
}
Vehicle::Vehicle(int ID) {
    this->timeOfEntry = time(0);
    this->ID = ID;
}

// Car : 10%, Bus : 25%, Motorbike : 15%
int Vehicle::getID() {
    return this->ID;
}

// Virtual
int Vehicle::getParkingDuration() {
    return 0; // Invalid generic parking duration
}
std::string Vehicle::getVehicleType() {
    return "Generic";
}

Vehicle::~Vehicle() {}
