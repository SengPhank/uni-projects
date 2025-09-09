#pragma once
#include "Appliance.h"

class House
{
private:
    int numAppliances;
    int curAppliances;
    Appliance** allAppliances;
public:
    House(/* default */);
    House(int numAppliances);
    ~House();

    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();

    // Encapsulation
    int getMaxAppliances();
    int getCurrentAppliances();
};
