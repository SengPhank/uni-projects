/*
2-5.  Write a function that given an array of integers and its length, will determine if the elements are in descending order or not,
 that is, each element is less than or equal to the previous element. 
 The function must return true if in the size parameter is greater than 0 and the elements are in descending order, otherwise it must return false.
*/

bool is_descending(int array[], int n) {
    if (n < 1) { return false; }
    bool returnValue = true;

    for (int i = 1; i < n; i++) {
        if (array[i] > array[i-1]) {
            returnValue = false;
            break;
        }
    }

    return returnValue;
}