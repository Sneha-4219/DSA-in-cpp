// LC-26 : Remove duplicates from sorted array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        // 'left' represents the index of the last unique element
        // All elements from index 0 to 'left' are guaranteed to be unique
        int left = 0;

        // 'right' scans the array from the second element onwards
        for(int right = 1; right < n; right++) {

            // Since the array is sorted,
            // a new unique element appears only when nums[right] != nums[left]
            if(nums[left] != nums[right]) {

                // Place the new unique element
                // immediately after the last unique one
                nums[left + 1] = nums[right];

                // Move the left pointer forward
                left++;
            }
        }

        // The new length of the array is left + 1
        return left + 1;

        // Time Complexity: O(n) Each element is checked once.
        // Space Complexity: O(1) The operation is done in-place.
    }
};
