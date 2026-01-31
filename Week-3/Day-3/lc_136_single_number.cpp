// LC-136 : Single number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int xorNum = 0;

        // Core idea:
        // XOR has three important properties:
        // 1) a ^ a = 0
        // 2) a ^ 0 = a
        // 3) XOR is commutative and associative
        //
        // Since every number appears twice except one,
        // all duplicate numbers cancel each other out.
        // The remaining value is the unique number.

        for(int x : nums) {
            xorNum ^= x;
        }

        return xorNum;

        // Time Complexity: O(n) Each element is processed once.
        // Space Complexity: O(1) Only one variable is used.
    }
};
