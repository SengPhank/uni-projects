#include <iostream>
#include <cstdlib> // Random
#include <ctime> // Time for seeding random
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

void inputCars(ParkingLot* lot) {
    // Input Cars
    std::cout << "Enter a vehicle to input.\n'C' : Car\n'B' : Bus\n'M' : Motorbike\n'X' : Exit\n'AnythingElse' : Randomise Rest" << std::endl;
    char s = 'C';
    while (s != 'X') {
        if (s == 'C' || s == 'B' || s == 'M') {
            std::cin >> s;
        }
        switch (s) {
            case 'C': {
                // Create ID from 0 - numVehicles
                Car* newC = new Car(rand());
                lot->parkVehicle(newC);
                std::cout << "Inserted Car" << std::endl;
                break;
            }
            case 'B': {
                // Create ID from 0 - numVehicles
                Bus* newB = new Bus(rand());
                lot->parkVehicle(newB);
                std::cout << "Inserted Bus" << std::endl;
                break;
            }
            case 'M': {
                // Create ID from 0 - numVehicles
                Motorbike* newM = new Motorbike(rand());
                lot->parkVehicle(newM);
                std::cout << "Inserted MotorBike" << std::endl;
                break;
            }
            // Exit early
            case 'X': {
                break;
            }
            // Randomise rest of input
            default: {
                // stop random
                if (lot->getCount() < lot->getMaxCount()) return; 
                // Create ID from 0 - numVehicles
                int r = rand() % 3; // rand from 0-3
                if (r == 0) {
                    Car* newC = new Car(rand());
                    lot->parkVehicle(newC);
                    std::cout << "R Inserted Car" << std::endl;
                } else if (r == 1) {
                    Bus* newB = new Bus(rand());
                    lot->parkVehicle(newB);
                    std::cout << "R Inserted Bus" << std::endl;
                } else if (r == 2) {
                    Motorbike* newM = new Motorbike(rand());
                    lot->parkVehicle(newM);
                    std::cout << "R Inserted MotorBike" << std::endl;
                }
                break;
            }
        }
    }
}
void inputRmv(ParkingLot* lot) {
    // Input Cars
    char s = 'A';
    while (1) {
        std::cout << "Enter CMD.\n'A' : Check ALL Vs\n'B' : ID Removal\n'C' : Insert car\n'D' : Count Overstaying Vehicles\n'Other' : EXIT" << std::endl;
        std::cin >> s;
        switch (s) {
            case 'A': {
                lot->printVehicles();
                break;
            }
            case 'B': {
                // Create ID from 0 - numVehicles
                int a;
                std::cout << "enter ID to rmv: " << std::endl;
                std::cin >> a;
                lot->unparkVehicle(a);
                break;
            }
            case 'C': {
                inputCars(lot);
                break;
            }
            case 'D': {
                std::cout << "Overstaying Vehicles: " << lot->countOverstayingVehicles(15) << std::endl;
                break;
            }
            default: {
                return;
            }
        }
    }
}
int main(void) {
    srand(time(0));
    int x;
    std::cout << "Enter size: " << std::endl;
    std::cin >> x;
    ParkingLot* pl = new ParkingLot(x);
    inputCars(pl);
    inputRmv(pl);


    return 0;

}