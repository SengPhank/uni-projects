#include <iostream>

extern int max_element(int array[], int n);

int main(void) {
    int array[5] = {10, 30, 1, 5, 2};
    std::cout << max_element(array, 5) << std::endl;
    return 0;
}