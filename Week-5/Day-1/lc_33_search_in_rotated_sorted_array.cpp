/*
Problem: LC 33 - Search in Rotated Sorted Array
Pattern: Binary Search on Ordered Index Space (Pattern A)
Sub-Pattern: Rotated Sorted Array

Core Invariant:
If the target exists, it always lies within the current [low, high] range.

Key Insight:
Even though the array is rotated, at least one half (left or right)
is always sorted. We identify the sorted half and decide whether
the target lies inside it. Then we safely eliminate the other half.

Time Complexity: O(log n)
- Each iteration eliminates half of the search space.
- Search space shrinks strictly every step.

Space Complexity: O(1)
- Only constant extra variables are used.

Edge Cases:
- Single element array
- Target not present
- Pivot at boundaries
- Already fully sorted array
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        // Maintain invariant: if target exists, it lies in [low, high]
        while (low <= high) {
            // Safe mid calculation to avoid overflow
            int mid = low + (high - low) / 2;

            // If target found, return immediately
            if (nums[mid] == target) {
                return mid;
            }

            // Check if left half is sorted
            if (nums[low] <= nums[mid]) {

                // Target lies within sorted left half
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;  // eliminate right half
                } 
                else {
                    low = mid + 1;   // eliminate left half
                }

            } 
            else { 
                // Otherwise, right half must be sorted

                // Target lies within sorted right half
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;   // eliminate left half
                } 
                else {
                    high = mid - 1;  // eliminate right half
                }
            }
        }

        // Target not found
        return -1;
    }
};