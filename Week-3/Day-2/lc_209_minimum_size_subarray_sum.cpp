// LC-209 : Minimum size subarray sum

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;
        int sum = 0;
        int minLength = INT_MAX;

        // Core idea:
        // Use a variable-size sliding window
        // Expand the window using the right pointer
        // Shrink the window using the left pointer
        // The goal is to find the smallest window
        // whose sum is at least 'target'

        for(int right = 0; right < nums.size(); right++) {

            // Expand the window by adding the current element
            sum += nums[right];

            // Once the window satisfies the condition (sum >= target),
            // try to shrink it from the left to minimize its length
            while(sum >= target) {

                // Update the minimum length found so far
                minLength = min(minLength, right - left + 1);

                // Shrink the window by removing the leftmost element
                sum -= nums[left];
                left++;
            }
        }

        // If no valid subarray was found, return 0
        return minLength == INT_MAX ? 0 : minLength;

        // Time Complexity: O(n) Each element is added and removed from the window at most once.
        // Space Complexity: O(1) Only a few variables are used.
    }
};
