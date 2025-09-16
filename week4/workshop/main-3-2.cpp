#include <iostream>

extern int* readNumbers(void);
extern bool equalsArray(int*,int*,int );
extern int *reverseArray(int *numbers1,int length);

int main(void) {
    int* heap = readNumbers();
    int* heap2 = reverseArray(heap, 10);
    std::cout << "printing equal..." << equalsArray(heap, heap2, 10) << std::endl;

    return 0;
}