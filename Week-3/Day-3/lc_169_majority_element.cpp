// LC-169 : Majority element

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> freq;

        // Step 1: Count frequency of each element
        // Hash map stores:
        // key   -> element value
        // value -> number of times it appears
        //
        // This converts the problem from "searching"
        // into "looking up remembered information"

        for(int x : nums) {
            freq[x]++;
        }

        int ele = 0;
        int maxFreq = 0;

        // Step 2: Find the element with maximum frequency
        // Since the problem guarantees that a majority element exists,
        // the element with frequency > n/2 will be the answer

        for(auto& p : freq) {
            if(p.second > maxFreq) {
                maxFreq = p.second;
                ele = p.first;
            }
        }

        return ele;

        // Time Complexity: O(n) One pass to count frequencies, one pass to find the maximum.
        // Space Complexity: O(n) Hash map stores frequencies of elements.
    }
};
