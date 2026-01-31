// LC-242 : Valid anagram

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        // If lengths differ, they cannot be anagrams
        // Anagrams must have the same number of characters
        if(s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> freq;

        // Step 1: Count frequency of each character in string 's'
        // This records how many times each character appears
        for(char ch : s) {
            freq[ch]++;
        }

        // Step 2: Reduce frequency using characters from string 't'
        // If any character count becomes negative,
        // it means 't' has an extra character not present in 's'
        for(char ch : t) {
            freq[ch]--;
            if(freq[ch] < 0) {
                return false;
            }
        }

        // If all frequencies balance out to zero,
        // both strings contain the same characters in the same counts
        return true;

        // Time Complexity: O(n) Each character is processed once.
        // Space Complexity: O(1) (or O(26)) At most 26 lowercase English characters are stored.
    }
};
