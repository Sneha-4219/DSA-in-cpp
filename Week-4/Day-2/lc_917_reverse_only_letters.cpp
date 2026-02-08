// LC-917 : Reverse Only Letters

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {

        int n = s.length();
        int left = 0, right = n - 1;

        /*
            Two Pointers Invariant:
            All characters outside the range [left, right]
            are already placed correctly and will not be modified again.
        */

        while (left < right) {

            // Skip non-letter characters from the left
            if (!isalpha(s[left])) {
                left++;
                continue;
            }

            // Skip non-letter characters from the right
            if (!isalpha(s[right])) {
                right--;
                continue;
            }

            // Both characters are letters → safe to swap
            swap(s[left], s[right]);

            // Move both pointers inward after successful swap
            left++;
            right--;
        }

        // String with only letters reversed
        return s;

        // Time Complexity: O(n) Each character is visited at most once by either pointer.
        // Space Complexity: O(1) Reversal is done in-place using constant extra space.

    }
};
