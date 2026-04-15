#include <iostream>
#include <vector>
#include <algorithm>
#include "Test_cases.h"

/*
Merge sort (recursive):
split the array into two halves
keep splitting the array until there's only one element
merge by looking at the element of each, picking the smaller one and put it in the result

O(n) for counting/merging all elements
O(logn) number of recursive levels
O(nlogn) total
*/

// could be a LOT faster if we had a global vector that gets reused so no new vector is initialized.
std::vector<int> helperRec(const std::vector<int>& nums, int l, int r) {
    int n = nums.size();
    // base case, no elem
    if (n == 0 || l > r) return {};
    // base case, only one element
    if (l == r) return {nums[l]};
    
    std::vector<int> res;
    int m = l + (r-l) / 2;    
    // get the left sorted
    std::vector<int> lhs = helperRec(nums, l, m);
    // get right sorted
    std::vector<int> rhs = helperRec(nums, m+1, r);

    // compare and merge (smaller element wins)
    int lhsIdx = 0, rhsIdx = 0;
    int ln = lhs.size(), rn = rhs.size();
    for (int i = 0; i < ln+rn; i++) {
        if (lhsIdx >= ln) {
            res.push_back(rhs[rhsIdx++]);
        } else if (rhsIdx >= rn) {
            res.push_back(lhs[lhsIdx++]);
        } else {
            if (rhs[rhsIdx] < lhs[lhsIdx]) {
                res.push_back(rhs[rhsIdx++]);
            } else {
                res.push_back(lhs[lhsIdx++]);
            }
        }
    }
    return res;
}

std::vector<int> MergeSort(const std::vector<int>& nums) {
    return helperRec(nums, 0, nums.size()-1);
}
int main(void) {
    Test_cases tc;
    int res = tc.runCases(MergeSort);

    std::cout << "Completed test case: " << res << "/" << tc.getNumCases() << std::endl;
    return 0;
}
