#include <iostream>

extern double array_mean(int array[], int n);

int main(void) {
    int array[3] = {1, 5, 10};

    std::cout << array_mean(array, 3) << std::endl;
    return 0;
}