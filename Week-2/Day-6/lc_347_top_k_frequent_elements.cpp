// LC-347 : Top k frequent elements

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        vector<int> result;
        vector<vector<int>> bucket(n+1);

        for(int x : nums){freq[x]++;}

        for(auto it : freq){
            bucket[it.second].push_back(it.first);
        }
        for(int i = n; i >= 1 && result.size() < k; i--){
                for(int x : bucket[i]){
                    result.push_back(x);
                    if(result.size() == k) {break;}
                }
            }
        return result;
    }
};