#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

int main(void) {
    // Default house test
    House myHouseEmpty;
    Fridge* myFridge = new Fridge(10, 20);
    std::cout << "Attempting to add to empty house: ";
    if (!myHouseEmpty.addAppliance(new Fridge(10, 20))) {
        std::cout << "House is full!" << std::endl;
        delete myFridge;
    }

    // House test
    House welcomeTo(4);
    std::cout << "Total pC: " << welcomeTo.getTotalPowerConsumption() << std::endl;

    std::cout << "Attempting to add TV : ";
    TV* tv1 = new TV(2, 3);
    if (!welcomeTo.addAppliance(tv1)) {
        std::cout << "House is Full!" << std::endl;
        delete tv1;
    } else {
        std::cout << "Added! current House (max: " << welcomeTo.getMaxAppliances() 
        << ", current: " << welcomeTo.getCurrentAppliances() << ")" << std::endl;
    }

    std::cout << "Attempting to add ANOTHER TV : ";
    TV* tv2 = new TV(10, 9);
    if (!welcomeTo.addAppliance(tv2)) {
        std::cout << "House is Full!" << std::endl;
        delete tv2;
    } else {
        std::cout << "Added! current House (max: " << welcomeTo.getMaxAppliances() 
        << ", current: " << welcomeTo.getCurrentAppliances() << ")" << std::endl;
    }
    std::cout << "Total pC: " << welcomeTo.getTotalPowerConsumption() << std::endl;

    std::cout << "Attempting to add a Fridge : ";
    Fridge* fridge1 = new Fridge(2, 3);
    if (!welcomeTo.addAppliance(fridge1)) {
        std::cout << "House is Full!" << std::endl;
        delete fridge1;
    } else {
        std::cout << "Added! current House (max: " << welcomeTo.getMaxAppliances() 
        << ", current: " << welcomeTo.getCurrentAppliances() << ")" << std::endl;
    }

    std::cout << "Total pC: " << welcomeTo.getTotalPowerConsumption() << std::endl;
    std::cout << "Attempting to add a Fridge : ";
    Fridge* fridge2 = new Fridge(11, 4);
    if (!welcomeTo.addAppliance(fridge2)) {
        std::cout << "House is Full!" << std::endl;
        delete fridge2;
    } else {
        std::cout << "Added! current House (max: " << welcomeTo.getMaxAppliances() 
        << ", current: " << welcomeTo.getCurrentAppliances() << ")" << std::endl;
    }

    std::cout << "Attempting to add TV : ";
    TV* tv3 = new TV(12, 100);
    if (!welcomeTo.addAppliance(tv3)) {
        std::cout << "House is Full!" << std::endl;
        delete tv3;
    } else {
        std::cout << "Added! current House (max: " << welcomeTo.getMaxAppliances() 
        << ", current: " << welcomeTo.getCurrentAppliances() << ")" << std::endl;
    }
    std::cout << "Total pC: " << welcomeTo.getTotalPowerConsumption() << std::endl;
    
    return 0;
}