#include <iostream>

extern int* readNumbers(void);
extern int secondSmallestSum(int *,int) ;

int main(void) {
    int* heap = readNumbers();
    std::cout << "printing second largest: " << secondSmallestSum(heap, 4) << std::endl;

    return 0;
}