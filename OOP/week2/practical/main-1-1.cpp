#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main(void) {
    int array2D[4][4] = {
        {1, 3, 5, 10},
        {2, 4, 1, 11},
        {12, 3, 7, 1},
        {9, 13, 5, 7}
    };

    // expected : 1+ 4 + 7 + 7 = 19
    std::cout << "Sum: " << sum_diagonal(array2D) << std::endl;
    
    return 0;
}