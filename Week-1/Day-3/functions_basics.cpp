#include <bits/stdc++.h>
using namespace std;

// ==========================================
// BASIC STRUCTURE OF FUNCTIONS
// ------------------------------------------
// return_type function_name(parameters) {
//     function body;
//     return value;
// }
//===========================================

//================================
// 1. Simple Funtion with return
//================================

int add(int a, int b) {
    return a + b;
}

//================================
// 2. Void Function (No return)
//================================

void greet() {
    cout << "Hello, from greet function! \n";
}

//====================================
// 3. Pass by Value (No Modification)
//====================================

void increment1(int x) {
    x = x + 1; // only modifies local copy
}

//===================================================
// 4. Pass by reference (Modifies original variable)
//===================================================

void increment2(int &x) {
    x = x + 1; // modifies the original variable
}

//========================
// 5. Inline Function
//========================

inline void square(int x) {
    cout << "Square is: " << x * x << "\n";
} 

//=============================
// 6. Global v/s Local Scope
//=============================

int globalVar = 100;
void scopeExample() {
    int localVar = 50;
    cout << "Global variable: " << globalVar << "\n";
    cout << "Local Variable: " << localVar << "\n";
}

int main() {

    // Function call with return value
    int sum = add(2, 3);
    cout << "Sum is: " << sum << "\n";

    // void function call
    greet();

    // Pass by value example
    int a = 5;
    increment1(a);
    cout << "Value of a after pass by value: " << a << "\n";

    // Pass by reference example
    increment2(a);
    cout << "Value of a after pass by reference: " << a << "\n";

    // Inline function
    square(5);

    // Scope example
    scopeExample();

    return 0;
}