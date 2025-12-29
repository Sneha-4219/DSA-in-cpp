#include <bits/stdc++.h>
using namespace std;

// -----------------------
// 1. Reverse a vector
// -----------------------

void reverse(vector<int>& v) {
    int size = v.size();
    int start = 0, end = size-1;

    while(start < end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

        start++;
        end--;
    }
}

// -----------------------------------
// 2. Find maximum element in vector
// -----------------------------------

int findMax(vector<int>& v) {
    if(v.empty()){
        return -1;
    }
    int maximum = v[0];
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > maximum) {
            maximum = v[i];
        }
    }
    return maximum;
}

// ---------------------------------
// 3. Count even numbers in vector
// ---------------------------------

int countEven(vector<int>& v) {
    int count = 0;
    if(v.empty()) {
        return 0;
    }

    for(int i = 0; i < v.size(); i++) {
        if(v[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}


// Vector Traversal
void traverse(vector<int>& v) {
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {

    // Vector input

    int n;
    cout << "Enter vector size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter vector elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Original vector: ";
    traverse(v);

    // Reverse vector
    
    // reverse(v);
    // cout << "Reversed vector: ";
    // traverse(v);
    
    // Find maximum element

    int result = findMax(v);
    cout << "Maximum element: " << result << endl;

    // Count even numbers

    int count = countEven(v);
    cout << "Count of even numbers: " << count << endl;

    return 0;

}