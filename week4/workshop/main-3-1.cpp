#include <iostream>

extern int* readNumbers(void);
extern bool equalsArray(int*,int*,int );

int main(void) {
    int* heap = readNumbers();
    int* heap2 = readNumbers();
    std::cout << "printing equal..." << equalsArray(heap, heap2, 10) << std::endl;

    return 0;
}