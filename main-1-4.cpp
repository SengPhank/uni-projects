#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(void) {
    int array[3] = {1, 5, 10};
    int array2[3] = {1, 5, 10};
    std::cout << sum_two_arrays(array, array2, 3) << std::endl;
    return 0;
}