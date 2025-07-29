/*
Implement the function `count` such that, 

    Has the function signature: int count(int array[], int n)
    Returns the total count of even numbers in the given array
    
*/

int count(int array[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}