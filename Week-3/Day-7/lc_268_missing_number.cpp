// LC-268 : Missing number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int xor_All = 0;
        int xor_nums = 0;

        // Step 1:
        // XOR all numbers from 1 to n
        // This represents the complete expected range
        for(int i = 1; i <= n; i++) {
            xor_All ^= i;
        }

        // Step 2:
        // XOR all numbers present in the array
        // All matching numbers will cancel out later
        for(int x : nums) {
            xor_nums ^= x;
        }

        // Step 3:
        // XOR of the above two results gives the missing number
        // Because a ^ a = 0 and a ^ 0 = a
        return xor_All ^ xor_nums;

        // Time Complexity: O(n) One pass over the range and one pass over the array.
        // Space Complexity: O(1) Only constant extra variables are used.
    }
};
