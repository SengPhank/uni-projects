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
    void set_powerRating(int pR);
    int get_powerRating();
    bool get_isOn();
    virtual double getPowerConsumption();
    
};

