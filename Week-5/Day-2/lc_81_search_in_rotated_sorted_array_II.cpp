/*
Problem: LC 81 - Search in Rotated Sorted Array II
Pattern: Binary Search on Ordered Index Space (Pattern A)
Sub-Pattern: Rotated Array with Duplicates

Core Invariant:
If the target exists, it always lies within the current [low, high] range.

Key Insight:
In a rotated sorted array, at least one half is normally sorted.
However, duplicates can destroy the strict ordering guarantee.
When nums[low] == nums[mid] == nums[high], we cannot determine
which half is sorted — so we shrink the boundaries safely.

Time Complexity:
- Average / Best Case: O(log n)
  (We eliminate half the search space each iteration.)
- Worst Case: O(n)
  (When many duplicates exist, e.g., [1,1,1,1,1],
   we may shrink boundaries one-by-one.)

Space Complexity: O(1)
- Only constant extra variables are used.

Edge Cases:
- All elements identical
- Single element array
- Target not present
- Pivot near boundaries
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        // Maintain invariant: if target exists, it lies in [low, high]
        while (low <= high) {

            // Safe mid calculation to prevent overflow
            int mid = low + (high - low) / 2;

            // If target found, return immediately
            if (nums[mid] == target) {
                return true;
            }

            /*
            If elements at low, mid, and high are equal,
            we cannot determine which half is sorted.
            To preserve correctness, shrink the search space
            from both ends. This ensures progress.
            */
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }

            // If left half is sorted
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
        return false;
    }
};