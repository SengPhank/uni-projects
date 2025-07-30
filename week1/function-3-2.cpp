/*
3-2. Given an array of integers and its length, return the median of the array.
The median of a list is the middle number of the sorted list.
E.g. the array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3.
The function must return 0 if the size parameter, n, is even or if it is less than 1.
*/

#include <algorithm>
#include <vector>
int median_array(int array[], int n) {
    // to vector to enable sorting
    std::vector<int> heapVector;
    for (int i = 0; i < n; i++) {
        heapVector.push_back(array[i]);
    }
    sort(heapVector.begin(), heapVector.end());

    if (n < 1) { return 0; }
    if (n%2 == 0) {
        int middleValue = heapVector[(n/2)-1] + heapVector[n/2];
        return middleValue/2;
    }
    return heapVector[n/2];
}


// {2, 4, 4, 6, 8, 8} (n/2) + (n/2)-1, expected: 10/2 = 5