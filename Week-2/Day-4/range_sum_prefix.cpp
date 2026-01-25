#include <bits/stdc++.h>
using namespace std;

// Optimized range sum using prefix array
// Time Complexity: O(1) per query

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};
    int n = nums.size();

    vector<int> prefix(n);
    prefix[0] = nums[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    int left = 1, right = 3;

    int rangeSum;
    if(left == 0)
        rangeSum = prefix[right];
    else
        rangeSum = prefix[right] - prefix[left - 1];

    cout << "Range Sum: " << rangeSum << endl;
    return 0;
}
