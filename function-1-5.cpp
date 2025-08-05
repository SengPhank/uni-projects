/*
1-5 Given two two-dimensional arrays, add them together and print the result as in 1-4 above.
What relationship needs to be between the sizes of the two matrices?
*/

#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << array1[i][j] + array2[i][j] << " ";
        }
        std::cout << array1[i][2] + array2[i][2] << std::endl;
    }

    return;
}