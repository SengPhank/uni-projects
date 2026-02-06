#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"
// Car, Bus, Motorbike
class Motorbike : public Vehicle
{
public:
    Motorbike(int ID);    
    // Car : 10%, Bus : 25%, Motorbike : 15%
    int getParkingDuration() override;
    std::string getVehicleType() override;
};

#endif