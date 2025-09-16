#include <iostream>

extern bool is_ascending(int array[], int n);

int main(void) {
    int array[10] = {1, 2, 5, 10, 15, 20, 20, 21, 22, -1};
    std::cout << "strictly increasing: " << is_ascending(array, 10) << std::endl;
    return 0;
}