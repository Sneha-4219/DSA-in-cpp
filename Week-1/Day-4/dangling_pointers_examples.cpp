#include <bits/stdc++.h>
using namespace std;

// Dangerous Function
int* badFunction() {
    int x = 10;   // local variable
    return &x;    // returning address of local variable
}
int main() {

    // Dangling pointer using block scope
    int* p;
    {
        int a = 20;
        p = &a;
    } //a is destroyed here.

    // cout << *p;   UNDEFINED BEHAVIOUR


    // Using function
    int* q = badFunction();
    // cout << *q;    UNDEFINED BEHAVIOUR

    cout << "Dangling pointers examples are written for understanding" << endl;

    
    return 0;
}