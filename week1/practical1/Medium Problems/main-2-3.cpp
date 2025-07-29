#include <iostream>

extern void two_five_nine(int array[], int n);

int main(void) {
    int array[10] = {1, 1, 5, 9, 6, 3, 5, 9, 11, -2};
    two_five_nine(array, 10);
    return 0;
}