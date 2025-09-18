#include <iostream>
#include "AirFleet.h"

int main(void) {
    AirFleet af;
    AirVehicle** vs = af.get_fleet();

    for (int i = 0; i < 5; i++) {
        std::cout << vs[i]->get_weight() << std::endl;
    }

    return 0;
}