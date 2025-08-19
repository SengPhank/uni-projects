#include <iostream>

extern int* readNumbers(void);
extern void hexDigits(int*, int);

int main(void) {
    int* heap = readNumbers();
    std::cout << "printing In hex..." << std::endl;
    hexDigits(heap, 10);

    return 0;
}