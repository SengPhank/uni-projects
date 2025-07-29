#include <iostream>

extern int array_sum(int array[], int n);
int main(void) {
    int array[3] = {1, 5, 10};
    array_sum(array, 3);
    
    return 0;
}