// LC-217 : Contains Duplicate

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<long long> us;
        for(long long x : nums) {
            if(us.count(x)) {
                return true;
                break;
            }
            us.insert(x);
        }
        return false;
    }
};