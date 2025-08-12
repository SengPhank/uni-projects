#include <iostream>

#include "workshop.h"

// DYNAMIC ARRAY
// int* dynaArray = new int[size];
// for loop to insert, delete[] dynaArray to delete.
int main(void) {
    // PART 2
    // double* ptr = new double(69);
    // std::cout << *ptr << std::endl;
    // changeValue(ptr);
    // std::cout << *ptr << std::endl;
    // delete ptr;

    // PART 3
    // double a[5] = {1.3, 1.5, 7, 1, 5};
    // printArray(a, 5);

    // PART 4
    // double a[5] = {4.3, 10.5, 10.4, 10.51, 5};
    // std::cout << arrayMax(a, 5) << std::endl;

    // PART 5, 6, 7 create dynaArray
    double* heapA = dynamicArray(5, 1);
    for (int i = 0; i < 5; i++) {
        std::cout << heapA[i] << " ";
    }
    std::cout << std::endl;

    // PART 6
    std::cout << arrayMax(heapA, 10) << std::endl;
    delete[] heapA;

    return 0;
}