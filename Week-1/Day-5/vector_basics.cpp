#include <bits/stdc++.h>
using namespace std;

int main() {

    // ------------------------
    // 1. Vector Declaration
    // ------------------------

    vector<int> v;

    // ------------------------
    // 2. Inserting Elements
    // ------------------------

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // -------------------------
    // 3. Size vs Capacity
    // -------------------------

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // -----------------------
    // 4. Accessing Elements
    // -----------------------

    cout << "First element using []: " << v[0] << endl;
    cout << "Second element using at(): " << v.at(1) << endl;

    // ----------------------
    // 5. Traversing Vector
    // ----------------------

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // Range-based loop

    cout << "Using range-based loop: ";
    for(int x : v) {
        cout << x << " ";

    }
    cout << endl;

    // --------------------------
    // 6. Removing last element
    // --------------------------
    
    v.pop_back();
    cout << "Size after removing: " << v.size() << endl;

    return 0;

}