#pragma once
#include <string>
#include "AirVehicle.h"

class Helicopter : public AirVehicle
{
private:
    std::string name;                    // name of the Helicopter
public:
    Helicopter(/* args */);
    Helicopter(int w, std::string n);     // creates a Helicopter with weight w and name n
    ~Helicopter();

    // Functions
    void fly(int headwind, int minutes);

    // ENcapsulaton
    std::string get_name();
    void set_name(std::string s);
};

