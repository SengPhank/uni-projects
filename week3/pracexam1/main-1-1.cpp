#include <iostream>

extern double arrayMin(double* array, int size);

int main(void) {
    double a1[10] = {6, 9, 4, 0, 11, 1, -24.23, -24.22, 15.1, 15.11};
    double a2[10] = {6, 9, 4, 0, 11, 1, -24.23, -24.242, 15.1, 15.11};
    double a3[9] = {6, 9, 4, 0, 11, 1, 0.0, 15.1, 15.11};
    std::cout << arrayMin(a1, 10) << std::endl;
    std::cout << arrayMin(a2, 10) << std::endl;
    std::cout << arrayMin(a3, 9) << std::endl;

    return 0;
}