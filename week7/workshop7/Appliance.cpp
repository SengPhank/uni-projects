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

void Appliance::set_powerRating(int pR) {
    this->powerRating = pR;
}
int Appliance::get_powerRating() {
    return this->powerRating;
}
bool Appliance::get_isOn() {
    return this->isOn;
}
// Virtual
double Appliance::getPowerConsumption() {
    return 0.0L; 
}


