// LC-283 : Move Zeroes

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int fast = 0; fast < nums.size(); fast++) {
            if(nums[fast] != 0) {
                nums[slow] = nums[fast];
                slow++;
            }
        }

        // Core idea: scan once, write only non-zero values
        // Write index represents next valid position
        // In-place modification, no extra array
        // Maintains relative order of non-zero elements
        
        for(int i = slow; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};