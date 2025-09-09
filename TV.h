#pragma once
#include "Appliance.h"
class TV : public Appliance
{
private:
    double screenSize;
public:
    TV(/* default */);
    TV(int pR, double screenSize);
    ~TV();

    // Encapsulation
    void setScreenSize(double screenSize);
    double getScreenSize();

    double getPowerConsumption();
};

