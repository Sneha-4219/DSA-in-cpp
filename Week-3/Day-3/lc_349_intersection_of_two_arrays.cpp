// LC-349 : Intersection of two arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // Core idea:
        // We only care about whether an element exists in both arrays,
        // not how many times it appears.
        // A hash set is perfect for fast presence checking.

        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;

        // Traverse the second array and check presence in the set
        for(int x : nums2) {

            // If element exists in the set,
            // it is part of the intersection
            if(s.count(x)) {
                ans.push_back(x);

                // Remove the element from the set
                // This ensures uniqueness in the result
                // and prevents duplicates
                s.erase(x);
            }
        }

        return ans;

        // Time Complexity: O(n + m) Building the set takes O(n), checking elements takes O(m).
        // Space Complexity: O(n) The hash set stores elements of the first array.
    }
};
