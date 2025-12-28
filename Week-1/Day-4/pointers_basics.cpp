#include <bits/stdc++.h>
using namespace std;

int main() {

    int x = 10;
    int y = 20;

    cout << "Value of x: " << x << ", Address: " << &x << "\n";
    cout << "Value of y: " << y << ", Address: " << &y << "\n";


    int* p = &x;
    cout << "Value of x: " << x << "\n";
    cout << "Address of x: " << &x << "\n";
    cout << "Addres of x: " << p << "\n";
    cout << "Value: " << *p << "\n";

    // Pointer to pointer
    int var = 10;
    int* ptr = &var;

    *ptr = 20;
    int** pptr = &ptr;
    **pptr = 30;

    cout << "Var = " << var << "\n";
    cout << "ptr = " << ptr << "\n";
    cout << "Address of ptr = " << &ptr << "\n";
    cout << "pptr = " << pptr << "\n";
    cout << *ptr << "\n";
    cout << **pptr << "\n";

    return 0;
}