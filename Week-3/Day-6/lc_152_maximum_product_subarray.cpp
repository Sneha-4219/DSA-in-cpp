// LC-152 : Maximum product subarray

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        // maxProd: maximum product ending at current index
        // minProd: minimum product ending at current index
        // We track both because a negative number
        // can turn a minimum product into a maximum
        int maxProd = nums[0];
        int minProd = nums[0];

        // result stores the global maximum product found so far
        int result = nums[0];

        // Start from index 1 since index 0 is already considered
        for(int i = 1; i < nums.size(); i++) {

            // If the current number is negative,
            // multiplying will flip signs
            // So we swap maxProd and minProd
            if(nums[i] < 0) {
                swap(maxProd, minProd);
            }

            // Either start a new subarray at nums[i]
            // or extend the previous max product subarray
            maxProd = max(nums[i], nums[i] * maxProd);

            // Similarly, track the minimum product
            // (important for future negative numbers)
            minProd = min(nums[i], nums[i] * minProd);

            // Update the global result
            result = max(result, maxProd);
        }

        return result;

        // Time Complexity: O(n) Each element is processed once.
        // Space Complexity: O(1) Only constant extra variables are used.
    }
};
