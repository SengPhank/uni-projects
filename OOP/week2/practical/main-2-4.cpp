#include <iostream>
extern int sum_min_max(int integers[], int length);

int main(void) {
    int binArray[5] = {1, 3, 5, 3, 7}; // expected: 8
    int binArray2[4] = {-3, -2 ,-1, -2}; // expected: -4
    
    std::cout << sum_min_max(binArray, 5) << std::endl;
    std::cout << sum_min_max(binArray2, 4) << std::endl;
    
    return 0;
}