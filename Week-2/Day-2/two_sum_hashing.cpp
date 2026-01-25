#include <bits/stdc++.h>
using namespace std;

// Optimized Two Sum using Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> seen; // value -> index

    for(int i = 0; i < nums.size(); i++) {
        int needed = target - nums[i];

        if(seen.count(needed)) {
            cout << "Indices: " << seen[needed] << " " << i << endl;
            return 0;
        }

        seen[nums[i]] = i;
    }

    cout << "No pair found" << endl;
    return 0;
}
