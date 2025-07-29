/*
2-4.  Write a function that given an array of integers and its length, will determine if the elements are in ascending order or not,
that is, each element is greater than or equal to the previous element.
The function must return true if in the size parameter is greater than 0
and the elements are in ascending order, otherwise it must return false.
*/

bool is_ascending(int array[], int n) {
    if (n < 1) { return false; }
    bool returnValue = true;

    for (int i = 1; i < n; i++) {
        if (array[i-1] > array[i]) {
            returnValue = false;
            break;
        }
    }

    return returnValue;
}