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
int secondSmallestSum(int *numbers,int length) {
    int largest = 0;
    int second = 0;

    for (int i = 0; i < length; i++) {
        int curSum = 0;
        for (int j = i; j < length; j++) {
            curSum += numbers[j];
        }
        if (curSum > largest) {
            second = largest;
            largest = curSum;
        } else if (curSum > second) {
            second = curSum;
        }
    }

    return second;
}