#include <iostream>

extern double sum_even(double array[], int n);

int main(void) {
    double array[6] = {0, 1.5, 0, 2.5, 0, 3.5}; // expected : 0
    double array2[5] = {1, 2.1, 3, 1002.51, 2.5}; // expected : 6.5

    std::cout << "sumEven1 : " << sum_even(array, 6) << std::endl;
    std::cout << "sumEven2 : " << sum_even(array2, 5) << std::endl;


    return 0;
}