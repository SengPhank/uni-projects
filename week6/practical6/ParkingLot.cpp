#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

/*
int maxStore;
int currentStore;
Vehicle* vehicles;
*/
ParkingLot::ParkingLot() {
    this->maxStore = 0;
    this->currentStore = 0;
    this->vehicles = nullptr;
}
ParkingLot::ParkingLot(int maxPark) {
    this->maxStore = maxPark;
    this->currentStore = 0;
    this->vehicles = new Vehicle*[maxPark];
}
int ParkingLot::getCount() {
    return this->currentStore;
}
int ParkingLot::getMaxCount() {
    return this->maxStore;
}
void ParkingLot::parkVehicle(Vehicle* v) {
    if (this->currentStore >= this->maxStore) {
        std::cout<<"The lot is full" << std::endl;
    } else {
        this->vehicles[this->currentStore++] = v;
    }
}
void ParkingLot::unparkVehicle(int ID) {
    // Find vehicle, unpark it, and push elements back
    for (int i = 0; i < this->currentStore; i++) {
        if (this->vehicles[i]->getID() == ID) {
            delete this->vehicles[i]; // free the removed vehicle
            // Pull preceeding elements back by 1
            for (int j = i; j < this->currentStore-1; j++) {
                this->vehicles[j] = this->vehicles[j+1];
            }
            this->currentStore--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

void ParkingLot::printVehicles() {
    for (int i = 0; i < this->currentStore; i++) {
        std::cout << "ID: " << this->vehicles[i]->getID() 
        << ", TYPE: " << this->vehicles[i]->getVehicleType()
        << ", DURATION: " << this->vehicles[i]->getParkingDuration() 
        << std::endl;
    }
}

int ParkingLot::countOverstayingVehicles(int maxDuration) {
    int count = 0;
    for (int i = 0; i < this->currentStore; i++) {
        if (this->vehicles[i]->getParkingDuration() > maxDuration) count++;
    }
    return count;
}
ParkingLot::~ParkingLot() {
    for (int i = 0; i < this->currentStore; i++) {
        delete this->vehicles[i];
    }
    delete[] this->vehicles;
}
