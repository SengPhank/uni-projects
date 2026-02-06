#include "Person.h"
#include <iostream>

extern Person* createPersonArray(int);

int main(void) {
    Person* peoplePointer = createPersonArray(7);
    for (int i = 0; i < 7; i++) {
        std::cout << "Army #" << i << " : " << 
        peoplePointer[i].name << ", " << peoplePointer[i].age << std::endl;
    }

    delete[] peoplePointer;
    return 0;
}