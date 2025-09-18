#pragma once

class AirVehicle
{
protected:
    int weight;        // the weight of AirVehicle 
    float fuel;        // fuel percentage, always starts at 100
    int numberOfFlights; // initially 0
public:
    AirVehicle(/* default */);
    AirVehicle(int w);
    virtual ~AirVehicle();

    void refuel();      // Resets fuel back to 100
    virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)

    // Encapsulation
    int get_weight();
    void set_weight(int w);
    float get_fuel();
    void set_fuel(float f);
    int get_numberOfFlights();
    void set_numberOfFlights(int nof);
};

