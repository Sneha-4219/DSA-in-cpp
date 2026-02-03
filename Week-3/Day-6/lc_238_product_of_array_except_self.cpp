// LC-238 : Product of array except self

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        // Step 1: Prefix product
        // ans[i] will store the product of all elements to the left of index i
        // For index 0, there are no elements on the left, so we set it to 1
        ans[0] = 1;

        for(int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Step 2: Suffix product
        // We traverse from the right and keep a running suffix product
        // Multiply it with the prefix product already stored in ans[i]
        int suffix = 1;

        for(int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;

        // Time Complexity: O(n) Two linear passes through the array.
        // Space Complexity: O(1) extra space 
        // (The output array is not counted as extra space.)
    }
};
