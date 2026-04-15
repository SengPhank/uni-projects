#include <iostream>
#include <vector>
#include <algorithm>
#include "Test_cases.h"

/*
Selection sort approach (two ptrs, Iterative):
from left to right, 
let your left pointer be the next smallest value in nums
if a right value is larger, swap it with the left value

O(n^2)
*/
std::vector<int> selSort(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> numscpy = nums;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (numscpy[j] < numscpy[i]) std::swap(numscpy[i], numscpy[j]);
        }
    }
    return numscpy;
}
int main(void) {
    Test_cases tc;
    int res = tc.runCases(selSort);

    std::cout << "Completed test case: " << res << "/" << tc.getNumCases() << std::endl;
    return 0;
}
