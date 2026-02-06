#include <iostream>

extern double* duplicateArray(double* array, int size);

void printArr(double* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return;
}

int main(void) {
    double a1[10] = {6, 9, 4, 0, 11, 1, -24.23, -24.22, 15.1, 15.11};
    double a2[10] = {8, 10, 2, 1, 21, 1, -24.23, -24.242, 15.1, 15.11};
    double a3[9] = {7, 11, 3, 4, 12, 1, 0.0, 15.1, 15.11};

    double* temp1 = duplicateArray(a1, 10);
    double* temp2 = duplicateArray(a2, 10);
    double* temp3 = duplicateArray(a3, 9);

    printArr(temp1, 10);
    printArr(temp2, 10);
    printArr(temp3, 9);

    delete[] temp1;
    delete[] temp2;
    delete[] temp3;

    return 0;
}