// LC-53 : Maximum Subarray

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // currSum stores the maximum subarray sum
        // ending at the current index
        int currSum = nums[0];

        // maxSum stores the maximum subarray sum found so far
        int maxSum = nums[0];

        /*
            Core Idea (Kadane’s Algorithm):
            At each index, decide:
            - Either extend the previous subarray
            - Or start a new subarray from the current element
        */

        for (int i = 1; i < nums.size(); i++) {

            // Choose the better option:
            // start fresh at nums[i] OR extend previous subarray
            currSum = max(nums[i], currSum + nums[i]);

            // Update global maximum subarray sum
            maxSum = max(currSum, maxSum);
        }

        // Maximum sum of any contiguous subarray
        return maxSum;

        // Time Complexity: O(n) The array is traversed once, making a constant-time decision at each index.
        // Space Complexity: O(1) Only constant extra variables are used.

    }
};
