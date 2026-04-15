#include <iostream>
#include <vector>
#include <algorithm>
#include "Test_cases.h"

/*
Insertion sort (mainly iterative):
let the first item be "sorted" -> [ nums[0] ] 
for each 1 to n-1 item, 
    choose the best spot to insert it. if there are other elements, 
    then we must shift all of them to the right

O(n) for counting, 
for each counting, we may need to shift which is O(n)
O(n^2) total
*/
void vectorInsert(std::vector<int>& nums, int val, int idx) {
    // make room for it by moving all other elements foward
    nums.push_back(0); // increase size of vector
    int n = nums.size();
    // shift
    for (int i = n-1; i > idx; i--) {
        nums[i] = nums[i-1];
    }
    nums[idx] = val;
}
std::vector<int> InsertSort(const std::vector<int>& nums) {
    if (nums.size() == 0) return {};
    int n = nums.size();
    std::vector<int> sortedV = {nums[0]};
    for (int i = 1; i < n; i++) {
        bool found = false;
        // find a spot to put it
        for (int j = 0; j < sortedV.size(); j++) {
            if (nums[i] < sortedV[j]) {
                // shift +1 from j onwards
                vectorInsert(sortedV, nums[i], j);
                found = true;
                break;
            }
        }
        // push largest to the back
        if (!found) sortedV.push_back(nums[i]);
    }
    return sortedV;
}
int main(void) {
    Test_cases tc;
    int res = tc.runCases(InsertSort);

    std::cout << "Completed test case: " << res << "/" << tc.getNumCases() << std::endl;
    return 0;
}
