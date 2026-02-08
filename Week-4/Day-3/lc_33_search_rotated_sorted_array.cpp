// LC-33 : Search in Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        /*
            Key Idea:
            Even though the array is rotated,
            at least ONE half (left or right) is always sorted.
        */

        while (left <= right) {

            int mid = left + (right - left) / 2;

            // Target found
            if (nums[mid] == target) {
                return mid;
            }

            /*
                Determine which half is sorted
            */

            // Left half is sorted
            if (nums[left] <= nums[mid]) {

                /*
                    Check if target lies within the sorted left half
                */
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;  // Search left half
                } else {
                    left = mid + 1;   // Search right half
                }
            }
            // Right half is sorted
            else {

                /*
                    Check if target lies within the sorted right half
                */
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;   // Search right half
                } else {
                    right = mid - 1;  // Search left half
                }
            }
        }

        // Target not found
        return -1;

        // Time Complexity: O(log n) Binary search halves the search space each iteration.
        // Space Complexity: O(1) No extra memory is used.

    }
};
