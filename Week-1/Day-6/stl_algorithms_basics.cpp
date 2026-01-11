#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {5, 2, 8, 1, 3, 2};

    // --------------- SORT ---------------
    // Sorts the vector in ascending order
    // Time Complexity: O(n log n)
    sort(v.begin(), v.end());

    cout << "After sort: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // --------------- REVERSE ---------------
    // Reverses elements in the given range
    // Time Complexity: O(n)
    reverse(v.begin(), v.end());

    cout << "After reverse: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // --------------- MIN & MAX ELEMENT ---------------
    // Return iterator, not value
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());

    cout << "Minimum element: " << mn << endl;
    cout << "Maximum element: " << mx << endl;

    // --------------- FIND ---------------
    // Returns iterator to element if found, else end()
    int target = 8;
    auto it = find(v.begin(), v.end(), target);

    if(it != v.end()) {
        cout << target << " found in the vector" << endl;
    } else {
        cout << target << "not found in the vector" << endl;
    }

    return 0;
}