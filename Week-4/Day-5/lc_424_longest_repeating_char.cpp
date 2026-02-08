// LC-424 : Longest Repeating Character Replacement

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {

        // Frequency array to track character counts in the current window
        vector<int> freq(26, 0);

        // Left pointer marks the start of the sliding window
        int left = 0;

        // Stores the maximum frequency of a single character
        // inside the current window
        int maxFreq = 0;

        // Stores the maximum valid window size found so far
        int ans = 0;

        /*
            Sliding Window Invariant:
            At any point, the window [left, right] can be made valid
            by replacing at most k characters.
        */

        for (int right = 0; right < s.length(); right++) {

            // Include the current character in the window
            freq[s[right] - 'A']++;

            // Update the count of the most frequent character
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            /*
                If the number of characters to be replaced
                exceeds k, shrink the window from the left.
                (window size - max frequency > k → invalid)
            */
            while ((right - left + 1) - maxFreq > k) {
                freq[s[left] - 'A']--;  // Remove character at left
                left++;                 // Shrink window
            }

            // Update the answer with the current valid window size
            ans = max(ans, right - left + 1);
        }

        // Length of the longest valid substring
        return ans;

        // Time Complexity: O(n) Each character enters and leaves the sliding window at most once.
        // Space Complexity: O(1) Frequency array size is fixed (26 uppercase English letters).

    }
};
