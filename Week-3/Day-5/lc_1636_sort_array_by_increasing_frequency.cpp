// LC-1636: Sort array by increasing frequency

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> freq;

        // Step 1:
        // Count the frequency of each number
        // This tells us how many times each value appears
        for(int x : nums) {
            freq[x]++;
        }

        // Step 2:
        // Sort the array using a custom comparator
        //
        // Sorting rules:
        // 1) Elements with smaller frequency come first
        // 2) If frequencies are equal, larger values come first
        //
        // We capture the frequency map by reference
        // so the comparator can access it efficiently

        sort(nums.begin(), nums.end(), [&](int a, int b) {

            // Primary sort key: frequency (ascending)
            if(freq[a] == freq[b]) {
                // Secondary sort key: value (descending)
                return a > b;
            } else {
                return freq[a] < freq[b];
            }
        });

        return nums;

        // Time Complexity: O(n log n) Sorting dominates the complexity.
        // Space Complexity: O(n) Hash map stores frequencies.
    }
};
