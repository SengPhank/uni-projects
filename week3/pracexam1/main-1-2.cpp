#include <iostream>

extern void modifyArray(double* array, int size, double value);

void printArr(double* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return;
}
int main(void) {
    double a1[10] = {6, 9, 4, 0, 11, 1, -24.23, -24.22, 15.1, 15.11};
    double a2[10] = {6, 9, 4, 0, 11, 1, -24.23, -24.242, 15.1, 15.11};
    double a3[9] = {6, 9, 4, 0, 11, 1, 0.0, 15.1, 15.11};

    modifyArray(a1, 10, 3);
    printArr(a1, 10);

    modifyArray(a2, 10, 1.4);
    printArr(a2, 10);

    modifyArray(a3, 9, -2.2);
    printArr(a3, 9);

    return 0;
}