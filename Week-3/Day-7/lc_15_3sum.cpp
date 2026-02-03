// LC-15 : 3Sum

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Step 1: Sort the array
        // Sorting allows us to:
        // 1) Use the two-pointer technique
        // 2) Easily skip duplicates
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int n = nums.size();

        // Step 2: Fix the first element one by one
        for(int i = 0; i < n - 2; i++) {

            // Skip duplicate values for the first element
            // This avoids repeated triplets
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // Since the array is sorted:
            // If nums[i] > 0, then nums[j] and nums[k] will also be >= nums[i]
            // So the sum cannot be zero
            if(nums[i] > 0) break;

            int target = -nums[i];
            int j = i + 1;
            int k = n - 1;

            // Step 3: Two-pointer search for the remaining two elements
            while(j < k) {

                int current = nums[j] + nums[k];

                if(current == target) {

                    // Found a valid triplet
                    ans.push_back({nums[i], nums[j], nums[k]});

                    // Skip duplicates for the second element
                    while(j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }

                    // Skip duplicates for the third element
                    while(j < k && nums[k] == nums[k - 1]) {
                        k--;
                    }

                    // Move both pointers inward
                    j++;
                    k--;
                }
                else if(current < target) {
                    // Need a larger sum → move left pointer forward
                    j++;
                }
                else {
                    // Need a smaller sum → move right pointer backward
                    k--;
                }
            }
        }

        return ans;

        // Time Complexity: O(n²) One loop + two-pointer scan.
        // Space Complexity: O(1) extra (Ignoring the output array.)
    }
};
