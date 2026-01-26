#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    int write = 0;

    // Core idea: separate reading from writing
    // Read pointer scans every element once
    // Write pointer places only valid (non-zero) elements
    // Order is preserved because we write in scan order

    for(int read = 0; read < nums.size(); read++) {
        if(nums[read] != 0) {
            nums[write] = nums[read];
            write++;
        }
    }

    // Remaining positions are filled with zeroes
    while(write < nums.size()) {
        nums[write] = 0;
        write++;
    }

    for(int x : nums) cout << x << " ";
    return 0;
}
