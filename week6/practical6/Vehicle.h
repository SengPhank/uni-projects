#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <ctime>
// Car, Bus, Motorbike
class Vehicle
{
protected:
    std::time_t timeOfEntry;
    int ID;
public:
    Vehicle();
    Vehicle(int ID);   
    int getID();
    // To be overrided by children
    virtual int getParkingDuration(); 
    virtual std::string getVehicleType();
    ~Vehicle();
};

#endif