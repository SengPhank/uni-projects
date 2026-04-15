#include <iostream>
#include <vector>
#include <algorithm>
#include "Test_cases.h"

/*
Bubble sort (Iterative):
while (!sorted (or doing it max of n-1 times)):
    keep two pointers, one at i and the other at i+1
    go from 0 to n-2, and for each i and i+1, swap if i+1 is smaller
    the larger value will "bubble" to the top

O(n^2)
*/
std::vector<int> Bubsort(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> numscpy = nums;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (numscpy[j+1] < numscpy[j]) std::swap(numscpy[j+1], numscpy[j]);
        }
    }
    return numscpy;
}
int main(void) {
    Test_cases tc;
    int res = tc.runCases(Bubsort);

    std::cout << "Completed test case: " << res << "/" << tc.getNumCases() << std::endl;
    return 0;
}
