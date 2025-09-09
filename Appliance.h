#pragma once
class Appliance
{
protected:
    int powerRating;
    bool isOn;
public:
    Appliance(/* default */);
    Appliance(int powerRating);
    virtual ~Appliance();

    // Encapsulation
    void turnOn();
    void turnOff();
    int getPowerRating();
    virtual double getPowerConsumption();
    
};

