extern void count_digits(int array[4][4]);

int main(void) {
    int array2D[4][4] = {
        {1, 3, 5, 2},
        {2, 4, 1, 11},
        {12, 3, 7, 1},
        {9, 13, 5, 7}
    };
    
    count_digits(array2D);

    return 0;
}