// LC-217 : Contains Duplicate

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for(int x : nums) {
            freq[x]++;
        }

        for(const auto& p : freq) {
            if(p.second > 1) {
                return true;
            }
        }
        return false;
    }
};