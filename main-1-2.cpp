#include "Person.h"
#include <iostream>

extern PersonList createPersonList(int n);

int main(void) {
    PersonList peopleContainer = createPersonList(7);
    std::cout << "Printing an army of " << peopleContainer.numPeople << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "Army #" << i << " : " << 
        peopleContainer.people->name << ", " << peopleContainer.people->age << std::endl;
    }

    return 0;
}