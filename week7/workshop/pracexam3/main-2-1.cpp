#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"

int main(void) {
    Helicopter dfheli;
    Helicopter heli(5690, "exmaple");
    heli.refuel();

    std::cout << "Df heli: \n" <<
    "name: " << dfheli.get_name() << "\n"
    "weight: " << dfheli.get_weight() << "\n"
    "fuel: " << dfheli.get_fuel() << "\n" << std::endl;
    
    std::cout << "Real heli: \n" <<
    "name: " << heli.get_name() << "\n"
    "weight: " << heli.get_weight() << "\n"
    "fuel: " << heli.get_fuel() << std::endl;

    // 6% of heli fuel
    double tmp = heli.get_fuel() * 0.06;
    // FLy
    std::cout << "\nFLYING!" << std::endl;
    heli.fly(45, 10);
    std::cout << "Fuel left: " << heli.get_fuel() << std::endl;
    std::cout << "TMp : " << tmp << std::endl;
    heli.fly(1000, 10000);

    return 0;
}