// LC-1616 : Split Two Strings to Make Palindrome

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Helper function to check if substring s[l..r] is a palindrome
    bool checkPalindrome(string &s, int l, int r) {

        // Standard two-pointer palindrome check
        while (l < r) {
            if (s[l] != s[r]) {
                return false;   // Mismatch → not a palindrome
            }
            l++;
            r--;
        }

        return true;  // Substring is a valid palindrome
    }

    // Check if a palindrome can be formed by taking
    // prefix from string a and suffix from string b
    bool check(string &a, string &b) {

        int left = 0;
        int right = a.length() - 1;

        /*
            Two Pointers Invariant:
            Characters outside the range [left, right] already match
            when taking prefix from 'a' and suffix from 'b'.
        */

        while (left < right) {

            // If characters match, move both pointers inward
            if (a[left] == b[right]) {
                left++;
                right--;
            } 
            else {
                /*
                    First mismatch encountered.

                    At this point, we must make ONE decision:
                    Either the remaining substring of 'a' is a palindrome
                    OR the remaining substring of 'b' is a palindrome.

                    No further cross-comparisons are needed.
                */
                return checkPalindrome(a, left, right) ||
                       checkPalindrome(b, left, right);
            }
        }

        // All characters matched successfully
        return true;
    }

    bool checkPalindromeFormation(string a, string b) {

        /*
            Try both combinations:
            1) Prefix from 'a' + suffix from 'b'
            2) Prefix from 'b' + suffix from 'a'

            If either forms a palindrome, return true.
        */
        return check(a, b) || check(b, a);

        // Time Complexity: O(n) Each pointer moves inward once, and at most one palindrome check is performed after the first mismatch.
        // Space Complexity: O(1) No extra data structures are used; all checks are in-place.

    }
};
