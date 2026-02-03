// LC-724 : Find pivot index

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        long long totSum = 0;

        // Step 1:
        // Compute the total sum of the array
        // This allows us to derive the right sum
        // instead of recomputing it every time
        for(int x : nums) {
            totSum += x;
        }

        long long leftSum = 0;

        // Step 2:
        // Iterate through the array and treat each index as a candidate pivot
        // Left sum = sum of elements before index i
        // Right sum = total sum - left sum - current element
        for(int i = 0; i < nums.size(); i++) {

            long long rightSum = totSum - leftSum - nums[i];

            // If left and right sums are equal,
            // the current index is the pivot index
            if(rightSum == leftSum) {
                return i;
            }

            // Update left sum for the next iteration
            leftSum += nums[i];
        }

        // If no pivot index exists, return -1
        return -1;

        // Time Complexity: O(n) One pass to compute total sum and one pass to find the pivot.
        // Space Complexity: O(1) Only a few variables are used.
    }
};
