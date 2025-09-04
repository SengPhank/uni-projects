#include "Motorbike.h"
// Car, Bus, Motorbike
Motorbike::Motorbike(int ID) : Vehicle(ID) {}

// Car : 10%, Bus : 25%, Motorbike : 15%
int Motorbike::getParkingDuration() {
    return (time(0) - this->timeOfEntry) * 0.85;
}

std::string Motorbike::getVehicleType() {
    return "Motorbike";
}