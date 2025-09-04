#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"
// Car, Bus, Bus
class Bus : public Vehicle
{
public:
    Bus(int ID);    
    // Car : 10%, Bus : 25%, Bus : 15%
    int getParkingDuration() override;
    std::string getVehicleType() override;
};

#endif