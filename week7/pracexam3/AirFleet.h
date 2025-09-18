#pragma once
#include "AirVehicle.h"
class AirFleet
{
private:
    /* creates an air fleet containing pointers to 5 AirVehicle objects as an array; 
    */
    AirVehicle** fleet;
public:
    AirFleet(/* args */);
    ~AirFleet();

    AirVehicle **get_fleet();      // returns the array of pointers to the five AirVehicle objects
    
};

