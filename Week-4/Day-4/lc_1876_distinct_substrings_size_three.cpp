// LC-1876 : Substrings of Size Three with Distinct Characters

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {

        // Left pointer marks the start of the fixed-size window
        int left = 0;

        // Counts substrings of size 3 with all distinct characters
        int count = 0;

        /*
            Fixed Sliding Window Invariant:
            The window size is always exactly 3
            when we perform the distinct-character check.
        */

        for (int right = 0; right < s.length(); right++) {

            // When the window size becomes exactly 3
            if (right - left + 1 == 3) {

                // Check if all three characters in the window are distinct
                if (s[right] != s[right - 1] &&
                    s[right - 1] != s[right - 2] &&
                    s[right] != s[right - 2]) {
                    count++;
                }

                // Slide the window forward by moving the left pointer
                left++;
            }
        }

        // Total count of valid substrings
        return count;

        // Time Complexity: O(n) Each window of size 3 is checked once as the window slides.
        // Space Complexity: O(1) No extra data structures are used.

    }
};
