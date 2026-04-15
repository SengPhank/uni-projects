#include <iostream>
#include <vector>
#include <algorithm>
#include "Test_cases.h"

/*
Quick sort (Pivot approach, recursive):
Choose a random pivot idx (first, last, middle or random)
all elements less than the pivot is placed before it
all elements greater than the pivot is placed after it
apply the same to the left and right subarrays
*/

void helperRec(std::vector<int>& nums, int l, int r) {
    int n = nums.size();
    if (n == 0) return {};
    if (n == 1) return {nums[l]};

    int l = 0, r = n-1;
    // choose a pivot (middle)
    int pv = l + (r-l) / 2;

    std::vector<int> lhs, rhs;
    for (int i = 0; i < n; i++) {
        if (i == pv) continue;
        if (nums[i] <= nums[pv]) {
            lhs.push_back(nums[i]);
        } else {
            rhs.push_back(nums[i]);
        }
    }

    // repeat
    return helperRec(lhs) + helperRec(rhs);
}

std::vector<int> QuickSort(const std::vector<int>& nums) {
    std::vector<int> numscpy;
    helperRec(numscpy, 0, nums.size()-1);
    return 
}
int main(void) {
    Test_cases tc;
    int res = tc.runCases(QuickSort);

    std::cout << "Completed test case: " << res << "/" << tc.getNumCases() << std::endl;
    return 0;
}
