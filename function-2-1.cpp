/*
2-1. Write a function that given an array of integers and its length, will find the minimum (smallest) number and return it.
The function should return 0 if the size parameter, n, is less than 1.
*/

int min_element(int array[], int n) {
    if (n < 1) { return 0; }
    int min = array[0];
    
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}