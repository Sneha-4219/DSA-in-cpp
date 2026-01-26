#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};

    unordered_map<int, int> freq;

    // Core idea: use a hash map to count occurrences
    // Key = element, Value = number of times it appears
    // One pass to collect frequency information
    // Converts raw array data into structured insight

    for(int x : nums) {
        freq[x]++;
    }

    for(auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
