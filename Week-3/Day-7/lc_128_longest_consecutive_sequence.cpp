// LC-128 : Longest consecutive sequence

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Store all elements in a hash set
        // This allows O(1) average-time lookups
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        // Iterate over each unique element in the set
        for(int x : st) {

            // Only start counting if 'x' is the beginning of a sequence
            // i.e., there is no element just before it
            if(st.find(x - 1) == st.end()) {

                int currNum = x;
                int currLen = 1;

                // Expand the sequence forward
                // Keep checking for consecutive numbers
                while(st.find(currNum + 1) != st.end()) {
                    currNum++;
                    currLen++;
                }

                // Update the longest sequence length found so far
                longest = max(currLen, longest);
            }
        }

        return longest;

        // Time Complexity: O(n) Each number is processed at most once.
        // Space Complexity: O(n) Hash set stores all unique elements.
    }
};
