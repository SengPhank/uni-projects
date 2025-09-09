#include "Appliance.h"
#include "Fridge.h"

// private:
//     double volume;
Fridge::Fridge(/* default */) : Appliance() {
    this->volume = 0;
}
Fridge::Fridge(int pR, double vol) : Appliance(pR){
    this->volume = vol;
}
Fridge::~Fridge() {}

// Encapsulation
void Fridge::setVolume(double vol) {
    this->volume = vol;
}
double Fridge::getVolume() {
    return this->volume;
}

double Fridge::getPowerConsumption() {
    // Not sure if they want (volume / 100) to be integer flooed
    double powerConsumption = this->powerRating * 24 * ((double)this->volume / 100);
    return powerConsumption;
}


