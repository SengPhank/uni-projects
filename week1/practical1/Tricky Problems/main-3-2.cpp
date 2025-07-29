#include <iostream>

extern int median_array(int array[], int n); // can be unsorted

int main(void) {
    int array[6] = {2, 4, 4, 6, 8, 8}; // expected : 5
    int array2[6] = {6, 2, 5, 7, 0, 10}; // expected : 5
    int array3[5] = {2, 4, 4, 6, 8}; // expected : 4

    std::cout << "median1 : " << median_array(array, 6) << std::endl;
    std::cout << "median2 : " << median_array(array2, 6) << std::endl;
    std::cout << "median3 : " << median_array(array3, 5) << std::endl;

    return 0;
}