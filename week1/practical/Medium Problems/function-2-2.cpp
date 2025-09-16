/*
2-2. Write a function that returns the maximum element in an integer array.
The function should return 0 if the size parameter, n, is less than 1.
*/

int max_element(int array[], int n) {
    if (n < 1) { return 0; }
    int max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}