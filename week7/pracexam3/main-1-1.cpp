#include <iostream>
#include "AirVehicle.h"

int main(void) {
    AirVehicle a1;
    AirVehicle a2(30);

    std::cout << "Df Con air vehicle descrption: \n" <<
    "AIr fuel: " << a1.get_fuel() << "\n" <<
    "weight: " << a1.get_weight() << "\n" <<
    "nOf: " << a1.get_numberOfFlights() << "\n" <<
    std::endl;

    a1.refuel();
    std::cout << "Refuel : " << a1.get_fuel() << std::endl;

    std::cout << "Param con air vehicle descrption: \n" <<
    "AIr fuel: " << a2.get_fuel() << "\n" <<
    "weight: " << a2.get_weight() << "\n" <<
    "nOf: " << a2.get_numberOfFlights() << "\n" <<
    std::endl;

    return 0;
}