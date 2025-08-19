#include "Person.h"

PersonList createPersonList(int n) {
    Person* armyOfJanes = new Person[n];

    for (int i = 0; i < n; i++) {
        Person x = {"Jane Doe", 1};
        armyOfJanes[i] = x;
    }

    PersonList packsOfJanes = {armyOfJanes, n};

    return packsOfJanes;
}