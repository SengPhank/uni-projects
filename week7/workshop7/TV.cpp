#include "Appliance.h"
#include "TV.h"
// private:
//     double screenSize;

TV::TV(/* default */) : Appliance() {
    this->screenSize = 0;
}
TV::TV(int pR, double screenSize) :Appliance(pR) {
    this->screenSize = screenSize;
}
TV::~TV() {}

// Encapsulation
void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}
double TV::getScreenSize() {
    return this->screenSize;
}   

double TV::getPowerConsumption() {
    double powerConsumption = this->powerRating * (this->screenSize/10);
    return powerConsumption;
}


