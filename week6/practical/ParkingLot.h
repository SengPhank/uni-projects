#pragma once
#include "Vehicle.h"

class ParkingLot
{
private:
    int maxStore;
    int currentStore;
    // Dbl pointer to point towards vehicle *polymorphasized classes* (point to cars, bus etc. idk inglis)
    Vehicle** vehicles;

public:
    ParkingLot();
    ParkingLot(int maxPark);
    int getCount(); // return current Count
    int getMaxCount(); // return max count
    void printVehicles(); // print all vs in parking lot
    void parkVehicle(Vehicle* v);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxDuration);
    ~ParkingLot();
};
