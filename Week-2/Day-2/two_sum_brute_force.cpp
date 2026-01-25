#include <bits/stdc++.h>
using namespace std;

// Brute force Two Sum
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    int n = nums.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "No pair found" << endl;
    return 0;
}
