#include <iostream>

extern int is_identity(int array[10][10]);

int main(void) {
    // create identity matrix
    int array2D[10][10] = {};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                array2D[i][j] = 1;
            } else {
                array2D[i][j] = 0;
            }
            std::cout << array2D[i][j] << ", ";
        }
        std::cout << "\n";
    }


    // expected : true, false;
    std::cout << "Array1 Is Matrix: " << is_identity(array2D) << std::endl;
    array2D[0][2] = 1;
    std::cout << "Array1 Is Matrix: " << is_identity(array2D) << std::endl;
    
    return 0;
}