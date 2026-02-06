#include <iostream>
#include "AirVehicle.h"
#include "Airplane.h"

int main(void) {
    Airplane dfplane;
    Airplane plane(10, 100);
    plane.refuel();
    
    std::cout << "Df plane: \n" <<
    "numpass: " << dfplane.get_numPassengers() << "\n"
    "weight: " << dfplane.get_weight() << "\n"
    "fuel: " << dfplane.get_fuel() << "\n" << std::endl;
    
    std::cout << "Real plane: \n" <<
    "numpass: " << plane.get_numPassengers() << "\n"
    "weight: " << plane.get_weight() << "\n"
    "fuel: " << plane.get_fuel() << std::endl;

    // 72% of plane fuel
    // FLy
    std::cout << "\nFLYING!" << std::endl;
    plane.fly(65, 120);
    std::cout << "Fuel left: " << plane.get_fuel() << std::endl;
    plane.fly(100, 40);
    // Refuel
    

    return 0;
}