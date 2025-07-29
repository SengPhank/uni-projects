/*
3-3.  Write a function that given an array and its length, returns the following weighted average of the array, 
defined as the sum of each element multiplied by its frequency divided by the total number of elements. 

This can be expressed as:
Σ (xi * (wi / n)), 
where xi represents each element in the array, wi represents the frequency of that element in the array, and n is the size of the array.

 eg. if  the array is {1,2,1,4,1,3} the weighted average is 
 (1 * 3 / 6) + (2 * 1 / 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. 
 The function must return 0 if the size parameter, n, is less than 1.
 */

#include <unordered_map>
double weighted_average(int array[], int n) {
    if (n < 1) { return 0; }
    std::unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[array[i]]++;
    }

    // calculate weighted averge
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ((double) array[i]) * ((double) freq[array[i]] / n);
    }

    return sum;
}