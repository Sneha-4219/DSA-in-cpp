#include <bits/stdc++.h>
using namespace std;

// Brute force range sum
// Time Complexity: O(n) per query

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};

    int left = 1, right = 3;
    int sum = 0;

    for(int i = left; i <= right; i++) {
        sum += nums[i];
    }

    cout << "Range Sum: " << sum << endl;
    return 0;
}
