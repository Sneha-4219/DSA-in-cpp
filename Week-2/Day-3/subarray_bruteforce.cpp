#include <bits/stdc++.h>
using namespace std;

// Brute force maximum subarray sum
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = nums.size();

    int maxSum = INT_MIN;

    // Generate all subarrays
    for(int i = 0; i < n; i++) {
        int currentSum = 0;
        for(int j = i; j < n; j++) {
            currentSum += nums[j];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}
