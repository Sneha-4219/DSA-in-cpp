// LC-125 : Valid Palindrome

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.length() - 1;

        /*
            Two Pointers Invariant:
            At any point in the loop, all characters outside the range
            [left, right] have already been validated and will never be revisited.
        */

        while (left < right) {

            // Skip non-alphanumeric characters from the left
            if (!isalnum(s[left])) {
                left++;
                continue;
            }

            // Skip non-alphanumeric characters from the right
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            // Compare characters after normalizing case
            if (tolower(s[left]) != tolower(s[right])) {
                return false;  // Symmetry breaks → not a palindrome
            }

            // Move both pointers inward after successful comparison
            left++;
            right--;
        }

        // All valid character pairs matched successfully
        return true;

        // Time Complexity: O(n) Each character is processed at most once by either pointer.
        // Space Complexity: O(1) No extra data structures are used; only constant space.
    }
};
