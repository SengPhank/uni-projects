/*
1-3 Given a matrix of integers, count the number of times each number 0-9 appears.
Print out your results on one line in the following form:
*/
#include <unordered_map>
#include <iostream>

void count_digits(int array[4][4]) {
    std::unordered_map<int, int> freq;

    // count
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            freq[array[i][j]]++;
        }
    }

    // print
    // expected out format: 0:12;1:4;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;
    for (int i = 0; i < 10; i++) {
        std::cout << i << ":" << freq[i] << ";"; 
    }
    std::cout << std::endl;

    return;
}