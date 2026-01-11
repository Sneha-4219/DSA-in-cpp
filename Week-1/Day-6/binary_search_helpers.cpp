#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 2, 2, 3, 4, 5};

    // Always sort before using binary search helpers
    sort(v.begin(), v.end());

    int x = 2;

    // --------------- BINARY SEARCH ---------------
    // Checks if element exists
    // Time Complexity: O(log n)
    bool exists = binary_search(v.begin(), v.end(), x);
    
    if(exists) {
        cout << x << " exists in the vector\n";
    } else {
        cout << x << " does not exist in the vector\n";
    }

    // --------------- LOWER & UPPER BOUND ---------------
    // lower_bound: first element >= x
    // upper_bound: first element > x

    int lb = lower_bound(v.begin(), v.end(), x) - v.begin();
    int ub = upper_bound(v.begin(), v.end(), x) - v.begin();

    cout << "Lower Bound Index: " << lb << endl;
    cout << "Upper Bound Index: " << ub << endl;

    // --------------- FREQUENCY USING BOUNDS ---------------
    // Number of occurrences of x
    int frequency = ub - lb;

    cout << "Frequency of " << x << ": " << frequency << endl;

    return 0;

}