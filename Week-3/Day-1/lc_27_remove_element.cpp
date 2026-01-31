// LC-27 : Remove Element

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int write = 0;

        // Core idea:
        // Read pointer scans every element
        // Write pointer decides where valid elements go
        // We overwrite unwanted values in-place
        // Order of remaining elements is preserved

        for(int read = 0; read < nums.size(); read++) {
            if(nums[read] != val) {
                nums[write] = nums[read];
                write++;
            }
        }

        // 'write' represents the new length of the array
        return write;

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
