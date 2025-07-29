#include <iostream>

extern int count_evens(int number);

int main(void) {
    std::cout << count_evens(7) << std::endl;
    return 0;
}