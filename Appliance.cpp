#include "Appliance.h"

// protected:
//     int powerRating;
//     bool isOn;
Appliance::Appliance(/* default */) {
    this->isOn = false; 
    this->powerRating = 0;
}
Appliance::Appliance(int powerRating) {
    this->isOn = false; 
    this->powerRating = powerRating;
}
Appliance::~Appliance() {}

void Appliance::turnOn() {
    this->isOn = true;
}
void Appliance::turnOff() {
    this->isOn = false;
}

int Appliance::getPowerRating() {
    return this->powerRating;
}

// Virtual
double Appliance::getPowerConsumption() {
    return 0.0L; 
}


