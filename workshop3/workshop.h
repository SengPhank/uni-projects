#include <iostream>

void changeValue(double* dblPtr) {
    *dblPtr = 42;
    return;
}

void printArray(double* a, int b) {
    for (int i = 0; i < b; i++) {
        std::cout << *(a+i) << " ";
    }
    std::cout << std::endl; 

    return;
}

double arrayMax(double* arr, int len) {
    double maxi = *arr;
    for (int i = 1; i < len; i++) {
        if (*(arr+i) > maxi) {
            maxi = *(arr+i);
        }
    }

    return maxi;
}

// Heap pre-populated array
double* dynamicArray(int len, double num) {
    double* dynaArray = new double[len];
    for (int i = 0; i < len; i++) {
        // PART 7
        dynaArray[i] = num;
    }

    return dynaArray;
}