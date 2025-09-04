#include "Car.h"
// Car, Bus, Motorbike
Car::Car(int ID) : Vehicle(ID) {}

// Car : 10%, Bus : 25%, Motorbike : 15%
int Car::getParkingDuration() {
    return (time(0) - this->timeOfEntry) * 0.9;
}

std::string Car::getVehicleType() {
    return "Car";
}