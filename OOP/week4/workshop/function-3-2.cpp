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
void printNumbers(int* heapArray, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << i << " " << heapArray[i] << std::endl;
    }

    delete[] heapArray;

    return;
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

int *reverseArray(int *numbers1,int length) {
    // doing it in-place because i'm so cool (nvm we require 2 different vectors)
    int* newHeap = new int[length];
    for (int i = length-1; i >= 0; i--) {
        newHeap[length-i-1] = numbers1[i];
    }

    return newHeap;
}