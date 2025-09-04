#include "Bus.h"
// Car, Bus, Motorbike
Bus::Bus(int ID) : Vehicle(ID) {}

// Car : 10%, Bus : 25%, Motorbike : 15%
int Bus::getParkingDuration() {
    return (time(0) - this->timeOfEntry) * 0.75;
}

std::string Bus::getVehicleType() {
    return "Bus";
}