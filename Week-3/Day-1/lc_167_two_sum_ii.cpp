// LC-167 : Two sum II (Sorted Array)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size() - 1;

        // Core idea:
        // The array is already sorted in non-decreasing order
        // This allows us to use two pointers instead of hashing
        // We try to narrow down the search space intelligently

        while(left <= right) {

            int currSum = numbers[left] + numbers[right];

            if(currSum == target) {
                // Problem expects 1-based indexing
                return {left + 1, right + 1};
            }
            else if(currSum < target) {
                // Current sum is too small
                // Move left pointer to increase the sum
                left++;
            }
            else {
                // Current sum is too large
                // Move right pointer to decrease the sum
                right--;
            }
        }

        // As per problem statement, exactly one solution exists,
        // so this return is just for completeness
        return {};

        // Time Complexity: O(n) — each pointer moves at most n times
        // Space Complexity: O(1) — no extra data structures used
    }
};
