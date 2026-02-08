// LC-1456 : Maximum Number of Vowels in a Substring of Given Length
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Helper function to check if a character is a vowel
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {

        // Left pointer marks the start of the fixed-size window
        int left = 0;

        // Counts the number of vowels in the current window
        int vowels = 0;

        // Stores the maximum number of vowels found in any valid window
        int ans = 0;

        /*
            Fixed Sliding Window Invariant:
            The window size is always exactly k
            when we update the answer.
        */

        for (int right = 0; right < s.length(); right++) {

            // Expand the window by including s[right]
            if (isVowel(s[right])) {
                vowels++;
            }

            // When the window size reaches k
            if (right - left + 1 == k) {

                // Update the maximum vowel count
                ans = max(ans, vowels);

                // Shrink the window from the left
                if (isVowel(s[left])) {
                    vowels--;
                }
                left++;
            }
        }

        // Maximum number of vowels in any substring of length k
        return ans;

        // Time Complexity: O(n) Each character is processed once as the window slides.
        // Space Complexity: O(1) Only constant extra variables are used.

    }
};
