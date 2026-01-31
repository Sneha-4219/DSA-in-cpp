// LC-643 : Maximum Average Subarray I

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double windowSum = 0;

        // Step 1:
        // Build the initial window of size k
        // This represents the sum of the first k elements
        // We do this once to avoid repeated computation later
        for(int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        // maxSum keeps track of the maximum window sum seen so far
        double maxSum = windowSum;

        // Step 2:
        // Slide the window forward one element at a time
        // Add the new element entering the window
        // Remove the element leaving the window
        // This keeps the window size fixed at k
        for(int i = k; i < nums.size(); i++) {
            windowSum += nums[i];       // include new element
            windowSum -= nums[i - k];   // exclude old element

            // Update maximum window sum if current is larger
            maxSum = max(maxSum, windowSum);
        }

        // The problem asks for the maximum average
        // Average = sum / window size
        return maxSum / k;

        // Time Complexity: O(n) Each element is added and removed once.
        // Space Complexity: O(1) Only a few variables are used.
    }
};
