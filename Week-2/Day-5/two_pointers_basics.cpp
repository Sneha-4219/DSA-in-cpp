#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    int left = 0;
    int right = nums.size() - 1;

    // Core idea: use two indices to control traversal from both ends
    // Left pointer moves forward, right pointer moves backward
    // Stop when pointers meet — all useful comparisons are done
    // This avoids extra loops and keeps logic O(n)

    while(left < right) {
        cout << nums[left] << " " << nums[right] << endl;
        left++;
        right--;
    }

    return 0;
}

