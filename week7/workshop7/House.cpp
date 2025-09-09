#include "House.h"
// private:
//     int numAppliances;
//     int curAppliances;
//     Appliance** allAppliances;

House::House(/* default */) {
    this->numAppliances = 0;
    this->curAppliances = 0;
    allAppliances = nullptr;
}
House::House(int numAppliances) {
    this->numAppliances = numAppliances;
    this->curAppliances = 0;
    this->allAppliances = new Appliance*[numAppliances];
}
// Free
House::~House() {
    for (int i = 0; i < this->numAppliances; i++) {
        delete this->allAppliances[i];
    }
    delete[] this->allAppliances;
    // std::cout << "Memory Cleared!" << std::endl;
}

bool House::addAppliance(Appliance* appliance) {
    if (this->curAppliances >= this->numAppliances) return false;
    this->allAppliances[this->curAppliances++] = appliance;
    return true;
}
double House::getTotalPowerConsumption() {
    double sumi = 0;
    for (int i = 0; i < this->curAppliances; i++) {
        sumi += this->allAppliances[i]->getPowerConsumption();
    }
    return sumi;
}

// Encapsulation
int House::getMaxAppliances() {
    return this->numAppliances;
}
int House::getCurrentAppliances() {
    return this->curAppliances;
}
