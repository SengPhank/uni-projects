#include <iostream>
#include <cstdlib>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(void) {
    srand(time(0));
    // Input NumVs
    int numVehicles;
    std::cout << "Enter numV: ";
    std::cin >> numVehicles;
    Vehicle** heapParkingLot = new Vehicle*[numVehicles]; 

    // Input Cars
    std::cout << "Enter a vehicle to input.\n'C' : Car\n'B' : Bus\n'M' : Motorbike\n'AnythingElse' : Randomise Rest" << std::endl;
    char s = 'C';
    for (int i = 0; i < numVehicles; i++) {
        if (s == 'C' || s == 'B' || s == 'M') {
            std::cin >> s;
        }
        switch (s)
        {
        case 'C':
            // Create ID from 0 - numVehicles
            heapParkingLot[i] = new Car(i);
            std::cout << "Inserted Car" << std::endl;
            break;
        case 'B':
            // Create ID from 0 - numVehicles
            heapParkingLot[i] = new Bus(i);
            std::cout << "Inserted Bus" << std::endl;
            break;
        case 'M':
            // Create ID from 0 - numVehicles
            heapParkingLot[i] = new Motorbike(i);
            std::cout << "Inserted MotorBike" << std::endl;
            break;
        default:
            // Create ID from 0 - numVehicles
            int r = rand() % 3; // rand from 0-3
            if (r == 0) {
                heapParkingLot[i] = new Car(i);
                std::cout << "R Inserted Car" << std::endl;
            } else if (r == 1) {
                heapParkingLot[i] = new Bus(i);
                std::cout << "R Inserted Bus" << std::endl;
            } else if (r == 2) {
                heapParkingLot[i] = new Motorbike(i);
                std::cout << "R Inserted MotorBike" << std::endl;
            }
            break;
        }
    }

    // Output function
    char cmd = '.';
    while (cmd != 'x') {
        std::cout << "What would you like to do?\n'a': print all parking Duration\n'b' : print all park ID\n'x' : exit" << std::endl;
        std::cin >> cmd;
        switch (cmd)
        {
        case 'a':
            for (int i = 0; i < numVehicles; i++) {
                std::cout << heapParkingLot[i]->getParkingDuration() << std::endl;
            }
            break;
        case 'b':
            for (int i = 0; i < numVehicles; i++) {
                std::cout << heapParkingLot[i]->getID() << std::endl;
            }
            break;
        default:
            break;
        }

    }

    // clean
    for (int i = 0; i < numVehicles; i++) {
        delete heapParkingLot[i];
    }
    delete[] heapParkingLot;
    return 0;
}
