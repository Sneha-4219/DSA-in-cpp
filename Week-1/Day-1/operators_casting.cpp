#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Arithmetic
    cout << "Sum: " << a + b << "\n";
    cout << "Difference: " << a - b << "\n";

    // Type Casting
    cout << (double)a / b << "\n";

    // Overflow example
    int z = INT_MAX;
    z = z + 1;
    cout << z << "\n";

    return 0;
}