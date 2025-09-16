extern void print_summed(int array1[3][3],int array2[3][3]);

int main(void) {
    int array2D1[3][3] = {
        {1, 3, 5 },
        {2, 4, 11},
        {12, 3, 7}
    };
    int array2D2[3][3] = {
        {-1, 5, -10},
        {-5, -41, -11},
        {1, 2, 3}
    };
    
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}};
    print_summed(array2D1, array2D2);
    print_summed(matrix1,matrix2);

    return 0;
}