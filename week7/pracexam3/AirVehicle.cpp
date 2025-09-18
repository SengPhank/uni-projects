#include "AirVehicle.h"

// protected:
//     int weight;        // the weight of AirVehicle 
//     float fuel;        // fuel percentage, always starts at 100
//     int numberOfFlights; // initially 0
AirVehicle::AirVehicle(/* default */) {
    this->weight = 0;
    this->fuel = 100.0f;
    this->numberOfFlights = 0;
}
AirVehicle::AirVehicle(int w) {
    this->weight = w;
    this->fuel = 100.0f;
    this->numberOfFlights = 0;
}
// Virtual
AirVehicle::~AirVehicle() {}

// Methods
void AirVehicle::refuel() {
    this->fuel = 100;
}      // Resets fuel back to 100
// Virtual Methods
void AirVehicle::fly(int headwind, int minutes) {
    this->numberOfFlights++;
}

// Encapsulation
int AirVehicle::get_weight() {
    return this->weight;
}
void AirVehicle::set_weight(int w) {
    this->weight = w;
}
float AirVehicle::get_fuel() {
    return this->fuel;
}
void AirVehicle::set_fuel(float f) {
    this->fuel = f;
}
int AirVehicle::get_numberOfFlights() {
    return this->numberOfFlights;
}
void AirVehicle::set_numberOfFlights(int nof) {
    this->numberOfFlights = nof;
}

