#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(void) {
    int array[5] = {1,2,3,2,1};
    int array2[4] = {2,4,4,2};
    int array3[5] = {1, 4, 6, 9, 10};
    
    std::cout << "array1: " << is_fanarray(array, 5) << std::endl;
    std::cout << "array2: " << is_fanarray(array2, 4) << std::endl;
    std::cout << "array3: " << is_fanarray(array3, 5) << std::endl;
    return 0;
}