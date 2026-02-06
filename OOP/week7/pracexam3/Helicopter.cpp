#include "Helicopter.h"
// private:
//     std::string name;                    // name of the Helicopter
Helicopter::Helicopter(/* args */) : AirVehicle() {
    this->name = "";
}
Helicopter::Helicopter(int w, std::string n) : AirVehicle(w) {
    this->name = n;
}     // creates a Helicopter with weight w and name n
Helicopter::~Helicopter() {}

// Functions
void Helicopter::fly(int headwind, int minutes) {
    // Base consumption: 0.18% fuel per minute
    double baseCons = 0.0018l * minutes;
   // High headwind (40km/h or more): 0.4% fuel per minute "INSTEAD" 
    if (headwind >= 40) {
        baseCons = 0.004l * minutes;
    }
    // Weight penalty: For every kg over 5670kg, add 0.01% extra fuel per minute
    int over5670 = this->weight - 5670;
    if (over5670 > 0) {
        baseCons += 0.0001l * minutes * over5670;
    }
    // Check if the flight would leave less than 20% fuel remaining - if so, refuse to fly 
    if (baseCons <= 80) {
        // If the flight is allowed, consume the calculated fuel and increment numberOfFlights by 1
        this->fuel -= this->fuel * baseCons;
        this->numberOfFlights++;
    }
}

// ENcapsulaton
std::string Helicopter::get_name() {
    return this->name;
}
void Helicopter::set_name(std::string s) {
    this->name = s;
}

