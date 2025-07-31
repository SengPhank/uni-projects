extern void print_scaled(int array[3][3],int scale);

int main(void) {
    int array2D[3][3] = {
        {1, 3, 5 },
        {2, 4, 11},
        {12, 3, 7}
    };
    
    print_scaled(array2D, 3);

    return 0;
}