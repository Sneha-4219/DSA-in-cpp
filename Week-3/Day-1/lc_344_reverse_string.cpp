// LC-344 : Reverse String

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int left = 0;
        int right = s.size() - 1;

        // Core idea:
        // Use two pointers starting from both ends of the string
        // Swap characters at left and right positions
        // Move both pointers inward after each swap
        // Stop when pointers meet or cross

        while(left < right) {
            // Swap characters at current pointers
            // This reverses the string in-place
            swap(s[left], s[right]);

            // Move pointers towards the center
            left++;
            right--;
        }
        // Time Complexity: O(n) Each character is visited once.
        // Space Complexity: O(1) The reversal is done in-place.
    }
};
