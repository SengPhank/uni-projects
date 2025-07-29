/*
3-5. Write a function that returns the sum of the elements in the even positions in an array.
The function must return 0 if the size parameter, n, is less than 1. Note, 0 is considered an even position.
*/

double sum_even(double array[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i+=2) {
        sum += array[i];
    }

    return sum;
}