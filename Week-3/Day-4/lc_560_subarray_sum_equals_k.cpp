// LC-560 : Subarray sum equals k

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        // Core idea:
        // mp[prefixSum] = number of times this prefix sum has appeared
        // We initialize mp[0] = 1 to handle subarrays
        // that start from index 0
        mp[0] = 1;

        long long sum = 0;
        int count = 0;

        // Traverse the array and build prefix sums
        for(int x : nums) {

            // Update running prefix sum
            sum += x;

            // If (sum - k) exists in the map,
            // it means there are subarrays ending here
            // whose sum is exactly k
            if(mp.count(sum - k)) {
                count += mp[sum - k];
            }

            // Record the current prefix sum
            mp[sum]++;
        }

        return count;

        // Time Complexity: O(n) Each element is processed once.
        // Space Complexity: O(n) The hash map stores prefix sums.
    }
};
