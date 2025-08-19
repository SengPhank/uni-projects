#include "Person.h"

Person* createPersonArray(int n) {
    Person* armyOfJohnDoes = new Person[n];
    for (int i = 0; i < n; i++) {
        Person x = {"John Doe", 0};
        armyOfJohnDoes[i] = x;
    }

    return armyOfJohnDoes;
}