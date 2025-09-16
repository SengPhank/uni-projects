#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main(void) {
    // One single fridge
    Fridge myFridge(69, 420);
    std::cout << "MyFridge has a power rating of " << myFridge.getPowerRating()
    << " and volume: " << myFridge.getVolume()
    << " where power consumption: " << myFridge.getPowerConsumption() << std::endl;

    // Heap array
    Appliance** heapOfAppliances = new Appliance*[10];
    for (int i = 0; i < 10; i++) {
        heapOfAppliances[i] = new Fridge(i*2, (i*3)+5);
    }

    for (int i = 0; i < 10; i++) {
        std::cout << "Fridge #" << i 
        << " has a pR: " << heapOfAppliances[i]->getPowerRating() 
        << " and pC: " << heapOfAppliances[i]->getPowerConsumption()
        << std::endl;
    }

    // free
    for (int i = 0; i < 10; i++) {
        delete heapOfAppliances[i];
    }
    delete[] heapOfAppliances;

    return 0;
}