#include <bits/stdc++.h>
using namespace std;

int main() {

    int x = 10;
    int& ref = x;   // Alias of x

    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;


    // Modifying using ref
    ref = 100;
    cout << "After modification: " << endl;
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;


    return 0;
}