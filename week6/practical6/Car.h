#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
// Car, Bus, Motorbike
class Car : public Vehicle
{
public:
    Car(int ID);    
    // Car : 10%, Bus : 25%, Motorbike : 15%
    int getParkingDuration() override;
    std::string getVehicleType() override;
};

#endif