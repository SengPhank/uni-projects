/*
Make a function that outputs integers to hex in a heap array
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

void hexDigits(int* heapArray, int n) {
    // You may assume that all ints are numbers in the range 0 to 15.
    char toPrint;
    for (int i = 0; i < n; i++) {
        if (heapArray[i] < 10) {
            std::cout << i << " " << heapArray[i] << " " << heapArray[i] << std::endl;
        } else {
            switch (heapArray[i])
            {
            case (10):
                toPrint = 'A';
                break;
            case (11):
                toPrint = 'B';
                break;
            case (12): 
                toPrint = 'C';
                break;
            case (13):
                toPrint = 'D';
                break;
            case (14):
                toPrint = 'E';
                break;
            case (15):
                toPrint = 'F';
                break;
            default:
                toPrint = ' ';
                break;
            }
            std::cout << i << " " << heapArray[i] << " " << toPrint << std::endl;
        }
        
    }
    return;
}
