#include <bits/stdc++.h>
using namespace std;

int main() {

    // --------------------------
    // 1. Count unique elements
    // --------------------------

    vector<int> v = {1, 2, 2, 3, 1, 3, 2};
    unordered_set<int> us1;

    for(int x : v) {
        us1.insert(x);
    }

    cout << "Count of unique elements: " << us1.size() << endl;

    // ---------------------
    // 2. Check duplicates
    // ---------------------

    unordered_set<int> us2;
    bool hasDuplicate = false;
    for(int x : v) {
        if(us2.find(x) != us2.end()) {
            hasDuplicate = true;
            break;

        }
        us2.insert(x);
    }

    cout << "Contains Duplicate: " << (hasDuplicate ? "Yes" : "No") << endl;

    // ----------------------
    // 3. Remove duplicates
    // ----------------------

    unordered_set<int> us3(v.begin(), v.end());
    cout << "Elements after removing: " << endl;
    for(const auto &x : us3) {
        cout << x << " ";
    }
    cout << endl;


    // --------------------------
    // 4. Sorted unique elements
    // --------------------------

    cout << "Sorted unique elements: " << endl;
    set<int> us4(v.begin(), v.end());
    for(const auto &x : us4) {
        cout << x << " ";
    }
    cout << endl;

    // -------------------------------
    // 5. Intersection of two arrays
    // -------------------------------

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {2, 3, 5}; 
    unordered_set<int> temp(a.begin(), a.end());
    unordered_set<int> intersection;

    for(int x : b) {
        if(temp.find(x) != temp.end()) {
            intersection.insert(x);
        }
    }

    cout << "Elements after intersection: " << endl;
    for(const auto &x : intersection) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}