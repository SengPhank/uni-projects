#include <iostream>
extern int sum_if_palindrome(int integers[], int length);

int main(void) {
    int binArray[5] = {1, 3, 5, 3, 1}; // expected: 13
    int binArray2[6] = {1, 3, 5, 2, 3, 1}; // expected: -2
    
    std::cout << sum_if_palindrome(binArray, 5) << std::endl;
    std::cout << sum_if_palindrome(binArray2, 5) << std::endl;
    
    return 0;
}