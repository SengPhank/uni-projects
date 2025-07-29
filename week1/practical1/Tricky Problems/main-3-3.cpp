#include <iostream>

extern double weighted_average(int array[], int n);

int main(void) {
    int array[6] = {1,2,1,4,1,3};

    std::cout << "weighted average : " << weighted_average(array, 6) << std::endl;

    return 0;
}