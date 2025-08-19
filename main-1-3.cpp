#include "Person.h"
#include <iostream>

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main(void) {
    PersonList peopleContainer = createPersonList(7);
    std::cout << "Printing an army of " << peopleContainer.numPeople << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "Army #" << i << " : " << 
        peopleContainer.people[i].name << ", " << peopleContainer.people[i].age <<
        ", Address: " << &(peopleContainer.people[i]) << std::endl;
    }

    std::cout << "deep copying..." << std::endl;
    PersonList peopleTariff = deepCopyPersonList(peopleContainer);
    std::cout << "I've found an army of " << peopleTariff.numPeople << " people!" << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "Army #" << i << " : " << 
        peopleTariff.people[i].name << ", " << peopleTariff.people[i].age <<
        ", Address: " << &(peopleTariff.people[i]) << std::endl;
    }

    return 0;
}