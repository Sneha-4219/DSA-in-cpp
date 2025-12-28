#include <bits/stdc++.h>
using namespace std;

void incrementAll(vector<int>& v) {
    for(int& x : v) {
        x++;
    }
}

int main() {

    vector<int> v = {1, 2, 3, 4};

    incrementAll(v);

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}