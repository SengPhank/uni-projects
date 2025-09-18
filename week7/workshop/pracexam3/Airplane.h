#pragma once
#include "AirVehicle.h"

class Airplane : public AirVehicle
{
private:
    int numPassengers;               // number of passengers on the Airplane
public:
    Airplane(/* args */);
    Airplane(int w, int p);           // Create Airplane with weight w and passengers p
    ~Airplane();

    // FUnc
    void reducePassengers(int x);     // reduce passenger list by x
    void fly(int headwind, int minutes);         

    // Encapsulation
    int get_numPassengers();
    // "There is no setter for numPassengers. "
    // void set_numPassengers(int n);
};
