#include <iostream>

extern int num_count(int array[], int n, int number);

int main(void) {
    int array[3] = {1, 5, 10};

    std::cout << num_count(array, 3, 1) << std::endl;
    return 0;
}