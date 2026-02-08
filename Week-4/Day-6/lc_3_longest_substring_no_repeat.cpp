// LC-3 : Longest Substring Without Repeating Characters

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // Frequency map to track characters inside the current window
        unordered_map<char, int> freq;

        // Left pointer marks the start of the sliding window
        int left = 0;

        // Stores the maximum length of a valid window found so far
        int maxLen = 0;

        /*
            Sliding Window Invariant:
            At any point, the window [left, right] contains
            no repeating characters.
        */

        for (int right = 0; right < s.length(); right++) {

            // Expand the window by including s[right]
            freq[s[right]]++;

            /*
                If adding s[right] causes a repetition,
                shrink the window from the left until
                the window becomes valid again.
            */
            while (freq[s[right]] > 1) {
                freq[s[left]]--;   // Remove character at left from window
                left++;            // Shrink window from the left
            }

            // At this point, the window is valid
            // Update the maximum length
            maxLen = max(maxLen, right - left + 1);
        }

        // Length of the longest substring without repeating characters
        return maxLen;

        /*
        Time Complexity: O(n)
        Each character is added to the window once and removed once at most.

        Space Complexity: O(Σ) Σ is the size of the character set.
        For lowercase/ASCII characters, this is effectively O(1)
        */

    }
};
