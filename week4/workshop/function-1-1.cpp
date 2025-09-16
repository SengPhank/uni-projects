/*
The first function, readNumbers, is to read a set of 10 numbers from std::cin 
and use them to initialise a dynamically allocated array of int of length 10. 
The function must return a pointer to the array.
*/

/*
printNumbers, takes an int array of any length greater than 0 and prints all numbers in the array, one per line
print in the format 'index : value'
*/

#include <iostream>

int* readNumbers() {
    int* heapArray = new int[10];
    int temp;
    for (int i = 0; i < 10; i++) {
        std::cin >> temp;
        heapArray[i] = temp;
    }

    return heapArray;
}

void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
    return;
}
