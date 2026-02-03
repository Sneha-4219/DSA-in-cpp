// LC-918 : Maximum sum circular subarray

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Compute total sum of the array
        // This is needed to calculate the circular subarray sum later
        int totSum = 0;
        for(int x : nums) {
            totSum += x;
        }

        // Step 2: Find the maximum subarray sum (standard Kadane)
        // This handles the non-circular case
        int currSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < n; i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(currSum, maxSum);
        }

        // Edge case:
        // If all numbers are negative, the circular sum logic breaks
        // In that case, the maximum subarray is simply the largest element
        if(maxSum < 0) {
            return maxSum;
        }

        // Step 3: Find the minimum subarray sum
        // This helps us calculate the maximum circular sum
        int currMin = nums[0];
        int minSum = nums[0];

        for(int i = 1; i < n; i++) {
            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(currMin, minSum);
        }

        // Step 4: Maximum circular subarray sum
        // Circular sum = total sum - minimum subarray sum
        int circularSum = totSum - minSum;

        // Final answer is the maximum of:
        // 1) Non-circular maximum subarray
        // 2) Circular maximum subarray
        return max(circularSum, maxSum);

        // Time Complexity: O(n) Kadane’s algorithm runs twice, still linear.
        // Space Complexity: O(1) Only constant extra variables are used.
    }
};
