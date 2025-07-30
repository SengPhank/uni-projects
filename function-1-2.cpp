/*
1-2. Write a function that returns the average of all elements in an integer array. 
The function takes as parameters the array and the number of elements in the array. 
Your function should return 0.0 if the size parameter, n, is less than 1.
*/

double array_mean(int array[], int n) {
    double sum = 0;
    if (n <= 0) { return sum; } 
    
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    return (sum/n);
}