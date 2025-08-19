#include <iostream>
#include <vector>
#include <algorithm>

int* readNumbers(void) {
    int amount = 10;
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
    return;
}

int secondSmallestSum(int *numbers,int length) {
    if (length < 1) { return 0; }
    if (length == 1) { return numbers[0]; }
    
    std::vector<int> nums;
    for (int i = 0; i < length; i++) {
        int curSum = 0;
        for (int j = i; j < length; j++) {
            curSum += numbers[j];
            nums.push_back(curSum);
        }
    }

    std::sort(nums.begin(), nums.end());
    return nums[1];
}
