/*
Problem: First and Last Occurrence of an Element in Sorted Array
Pattern: Binary Search on Ordered Index Space (Pattern A)
Sub-Pattern: Condition-Based Binary Search (Lower Bound / Upper Bound)

Core Invariant:
The answer is the first/last index satisfying a condition,
and if it exists, it always lies within the current [low, high] range.

Key Insight:
We do NOT stop when nums[mid] == target.
Instead:
- For first occurrence → continue searching left.
- For last occurrence → continue searching right.

Binary search here finds a boundary, not just equality.

Time Complexity: O(log n)
- Each iteration halves the search space.

Space Complexity: O(1)
- Only constant extra variables are used.

Edge Cases:
- Target not present
- All elements same
- Single element array
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findFirstOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int answer = -1;

        // Maintain invariant: if first occurrence exists, it lies in [low, high]
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                answer = mid;        // potential first occurrence
                high = mid - 1;      // continue searching on left side
            }
            else if (nums[mid] < target) {
                low = mid + 1;       // eliminate left half
            }
            else {
                high = mid - 1;      // eliminate right half
            }
        }

        return answer;
    }

    int findLastOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int answer = -1;

        // Maintain invariant: if last occurrence exists, it lies in [low, high]
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                answer = mid;        // potential last occurrence
                low = mid + 1;       // continue searching on right side
            }
            else if (nums[mid] < target) {
                low = mid + 1;       // eliminate left half
            }
            else {
                high = mid - 1;      // eliminate right half
            }
        }

        return answer;
    }
};