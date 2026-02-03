// LC-35 : Search Insert Position

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();
        int index = -1;

        int left = 0, right = n - 1;

        // Core idea:
        // The array is sorted, so we use binary search.
        // We want the first position where nums[mid] >= target.
        // This position is either where target exists
        // or where it should be inserted to maintain sorted order.

        while(left <= right) {

            int mid = (left + right) / 2;

            if(nums[mid] >= target) {
                // This position is a valid candidate
                // Try to find an even smaller index on the left
                index = mid;
                right = mid - 1;
            }

            if(nums[mid] < target) {
                // Target must be on the right side
                left = mid + 1;
            }
        }

        // If we found a valid index, return it.
        // Otherwise, target is larger than all elements
        // and should be inserted at the end.
        return index != -1 ? index : n;

        // Time Complexity: O(log n)  Binary search halves the search space each step.
        // Space Complexity: O(1) Only constant extra variables are used.
    }
};
