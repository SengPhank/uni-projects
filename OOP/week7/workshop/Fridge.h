#pragma once
#include "Appliance.h"
class Fridge : public Appliance
{
private:
    double volume;
public:
    Fridge(/* default */);
    Fridge(int pR, double vol);
    ~Fridge();

    // Encapsulation
    void setVolume(double vol);
    double getVolume();

    double getPowerConsumption();
};

