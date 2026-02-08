// LC-680 : Valid Palindome II

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to check if substring s[i..j] is a palindrome
    bool checkPalindrome(string &s, int i, int j) {

        // Standard two-pointer palindrome check
        while (i < j) {
            if (s[i] != s[j]) {
                return false;  // Mismatch → not a palindrome
            }
            i++;
            j--;
        }

        return true;  // Substring is a palindrome

    }
    bool validPalindrome(string s) {

        int n = s.length();
        int left = 0, right = n - 1;

        /*
            Two Pointers Invariant:
            At any moment, all characters outside the range [left, right]
            are already confirmed to form a palindrome
            with at most one deletion allowed.
        */

        while (left < right) {

            // If characters at both pointers match,
            // move both pointers inward
            if (s[left] == s[right]) {
                left++;
                right--;
            } 
            else {
                /*
                    First mismatch encountered.
                    Since only ONE deletion is allowed,
                    we try the only two valid possibilities:

                    1) Skip the left character  → check [left+1, right]
                    2) Skip the right character → check [left, right-1]

                    If either substring is a palindrome,
                    the original string can be made a palindrome.
                */
                return checkPalindrome(s, left + 1, right) ||
                       checkPalindrome(s, left, right - 1);
            }
        }

        // No more than one mismatch found
        return true;
    }
    
    // Time Complexity: O(n) The main loop runs once, and the helper function is called at most once.
    // Space Complexity: O(1) Only constant extra space is used.
};
