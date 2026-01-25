#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};
    int n = nums.size();

    vector<int> prefix(n);
    prefix[0] = nums[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    cout << "Prefix Sum Array:\n";
    for(int x : prefix) {
        cout << x << " ";
    }

    return 0;
}
