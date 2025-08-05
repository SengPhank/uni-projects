#include <iostream>
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(void) {
    int binArray[5] = {1, 0, 1, 1, 1}; // expected: 23
    
    std::cout << binary_to_int(binArray, 5) << std::endl;
    
    return 0;
}