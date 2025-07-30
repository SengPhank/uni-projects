/*
1-4. Write a function that returns the sum of two arrays as an integer (of equal size). 
The function should take as parameters an array, another array and their size. 
Hence the result is sum of array 1 + sum of array 2. 
The function should return 0 if the size parameter, n, is less than 1. Try to do this in one for loop.
*/

int sum_two_arrays(int array[], int secondarray[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i] + secondarray[i];
    }

    return sum;
}