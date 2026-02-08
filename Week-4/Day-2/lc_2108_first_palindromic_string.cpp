// LC-2108 : Find First Palindromic String in the Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Helper function to check if a given string is a palindrome
    bool validPalindrome(string &s) {

        int n = s.length();
        int left = 0, right = n - 1;

        /*
            Two Pointers Invariant:
            All characters outside the range [left, right]
            have already been checked and matched correctly.
        */

        while (left < right) {

            // If characters at both ends do not match,
            // the string cannot be a palindrome
            if (s[left] != s[right]) {
                return false;
            }

            // Move both pointers inward after successful comparison
            left++;
            right--;
        }

        // All character pairs matched successfully
        return true;
    }

    string firstPalindrome(vector<string>& words) {

        int n = words.size();

        /*
            Scan each word from left to right.
            The first word that satisfies the palindrome condition
            should be returned immediately.
        */
        for (int i = 0; i < n; i++) {

            // Check if the current word is a palindrome
            if (validPalindrome(words[i])) {
                return words[i];
            }
        }

        // No palindromic string found in the array
        return "";
        
        /*
        Time Complexity:
        Let:
          - n = number of words
          - k = average length of a word

        In the worst case, we check all words and each palindrome check takes O(k), so total time is O(n * k).
        

        Space Complexity: O(1) No extra data structures are used.
        Palindrome check is done using two pointers in-place.
        */

    }
};
