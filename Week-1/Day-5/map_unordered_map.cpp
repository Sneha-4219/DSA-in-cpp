#include <bits/stdc++.h>
using namespace std;

int main() {

    // ---------------
    // Map example
    // ---------------

    map<int, int> mp;
    mp[5] = 1;
    mp[1] = 2;
    mp[3] = 1;

    cout << "Ordered map: (Sorted)" << endl;
    for(const auto &p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }

    // ------------------
    // Unordered example
    // ------------------

    unordered_map<int, int> ump;
    ump[5] = 1;
    ump[1] = 2;
    ump[3] = 1;

    cout << "Unordered map: " << endl;
    for(const auto &p : ump) {
        cout << p.first << " -> " << p.second << endl;
    }

    // ---------------------
    // Frequency Counting
    // ---------------------

    vector<int> v = {1, 2, 2, 2, 2, 3, 3, 3, 1};
    unordered_map<int, int> freq;

    for(int x : v) {
        freq[x]++;
    }

    cout << "Frequency of numbers: " << endl;
    for(const auto &p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;

}