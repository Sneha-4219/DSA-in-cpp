#include <bits/stdc++.h>
using namespace std;

int main() {

    // Basic pair

    pair<int, int> p = {1, 100};
    cout << p.first << " " << p.second << endl;

    // Nested pair

    pair<int, pair<int, int>> np = {1, {2, 3}};
    cout << np.first << " " << np.second.first << " " << np.second.second << endl;

    // Vector of pairs
    vector<pair<int, int>> v;
    v.push_back({1, 10});
    v.push_back({2, 20});
    v.push_back({3, 30});

    // Traversal

    for(auto p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}