#include <iostream>

extern bool is_descending(int array[], int n);

int main(void) {
    int array[5] = {30, 49, 48, 47, 47};
    std::cout << "strictly decreasing: " << is_descending(array, 5) << std::endl;
    return 0;
}