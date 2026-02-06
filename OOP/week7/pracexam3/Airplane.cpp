#include "Airplane.h"
#include <iostream>
// private:
//     int numPassengers;               // number of passengers on the Airplane

Airplane::Airplane(/* args */) : AirVehicle() {
    this->numPassengers = 0;
}
Airplane::Airplane(int w, int p) : AirVehicle(w) {
    this->numPassengers = p;
}           // Create Airplane with weight w and passengers p
Airplane::~Airplane() {}

// FUnc
void Airplane::reducePassengers(int x) {
    this->numPassengers -= x;
    if (this->numPassengers < 0) {
        this->numPassengers = 0;
    }
}     // reduce passenger list by x
int Airplane::get_numPassengers() {
    return this->numPassengers;
}
void Airplane::fly(int headwind, int minutes) {
    // 0.25 = 25%, 0.025 = 2.5, 0.0025 = 0.25%
    // Base consumption: 0.25% fuel per minute
    double bc = (0.0025l * minutes);
    // High headwind (60km/h or more): 0.5% fuel per minute instead
    if (headwind >= 60) {
        bc = (0.005l * minutes);
    }   
    // Passenger penalty: For every passenger, add 0.001% extra fuel per minute
    bc += 0.00001l * minutes * this->numPassengers;
    // Check if the flight would leave less than 20% fuel remaining - if so, refuse to fly 
    if (bc <= 80) {
        // If the flight is allowed, consume the calculated fuel and increment numberOfFlights by 1
        this->fuel -= this->fuel * bc;
        this->numberOfFlights++;
    }
}      


