#include <bits/stdc++.h>
using namespace std;

int main() {

    // -----------------------
    // Set example (ordered)
    // -----------------------

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5); // duplicates ignored

    // Set elements
    for(const auto &x : s) {
        cout << x << " ";
    }
    cout << endl;

    // find()
    if(s.find(3) != s.end()) {
        cout << "3 found in set." << endl;
    }

    // lower bound and upper bound
    cout << "Lower bound(2): " << *s.lower_bound(2) << endl;
    cout << "Upper bound(3) : " << *s.upper_bound(3) << endl;

    // erase through iterator
    auto it = s.find(1);
    if(it != s.end()) {
        s.erase(it);
    }

    // Elements after erasing(1)
    for(const auto &x : s) {
        cout << x << " ";
    }

    cout << endl;

    // clear()
    s.clear();
    cout << "Size of set after clearing: " << s.size() << endl;

    // --------------------
    // Unordered example
    // --------------------

    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10); // duplicates ignored

    // Unordered set elements
    for(const auto &x : us) {
        cout << x << " ";
    }
    cout << endl;

    // find()
    if(us.find(20) != us.end()) {
        cout << "20 found in the unordered set.";
    }
    cout << endl;

    // erase 10
    us.erase(10);
    for(const auto &x : us) {
        cout << x << " ";
    }
    cout << endl;

    // size() and empty()
    cout << "Size: " << us.size() << endl;
    cout << "Is empty ?" << (us.empty() ? " Yes" : " No") << endl;


    // count
    cout << "Count of 10: " << us.count(10) << endl;

    return 0;

}