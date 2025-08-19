#include <iostream>

int* readNumbers(void) {
    int* heapArray = new int[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        std::cin >> temp;
        heapArray[i] = temp;
    }

    return heapArray;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 1) { return false; }

    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }

    delete[] numbers1;
    delete[] numbers2;

    return true;
}