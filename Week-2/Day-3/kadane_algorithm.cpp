#include <bits/stdc++.h>
using namespace std;

// Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int currentSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        // Either extend the subarray or start fresh
        currentSum = max(nums[i], currentSum + nums[i]);

        // Update global maximum
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}
