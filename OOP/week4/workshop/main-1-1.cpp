#include <iostream>

extern int* readNumbers(void);
extern void printNumbers(int*, int);

int main(void) {
    int* heap = readNumbers();
    std::cout << "printing..." << std::endl;
    printNumbers(heap, 10);

    return 0;
}