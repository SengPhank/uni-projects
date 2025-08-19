#include <iostream>
#include <set>
int* readNumbers(void) {
    int amount = 4;
    int* heapArray = new int[amount];
    int temp;
    for (int i = 0; i < amount; i++) {
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

int secondSmallestSum(int *numbers,int length) {
    std::set<int> nums;
    for (int i = 0; i < length; i++) {
        int curSum = 0;
        for (int j = i; j < length; j++) {
            curSum += numbers[j];
            nums.insert(curSum);
        }
    }

    return *(++nums.begin());
}