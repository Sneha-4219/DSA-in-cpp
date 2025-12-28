#include <bits/stdc++.h>
using namespace std;
int main(){

    // =========================
    // Problem 1 : Even or odd
    // =========================

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n % 2 == 0){
        cout << "Even" << "\n";
    } else {
        cout << "Odd" << "\n";
    }

    // =========================================
    // Problem 2 : Positive / Negative / Zero
    // =========================================

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if(x > 0) {
        cout << "Positive." << "\n";
    } else if( x < 0) {
        cout << "Negative." << "\n";
    } else {
        cout << "Zero." << "\n";
    }

    // ====================================
    // Problem 3 : Largest of Two numbers
    // ====================================

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a > b) {
        cout << a << " is greater." << "\n";
    } else {
        cout << b << " is greater." << "\n";
    }

    // ===============================
    // Problem 4 : Eligibility Logic
    // ===============================

    int age, m1;
    cout << "Enter your age and marks: ";
    cin >> age >> m1;

    if(age >= 18 && m1 >= 60) {
        cout << "Eligible." << "\n";
    } else if(age < 18) {
        cout << "Not Eligible as age is less than 18." << "\n";
    } else {
        cout << "Not Eligible as marks are less than 60." << "\n";
    }

    // ============================
    // Problem 5 : Grade System
    // ============================

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 90) {
        cout << "Grade A" << "\n";
    } else if(marks >= 80 && marks < 90) {
        cout << "Grade B" << "\n";
    } else if(marks >= 70 && marks < 80) {
        cout << "Grade C" << "\n";
    } else if(marks >= 60 && marks < 70) {
        cout << "Grade D" << "\n";
    } else if(marks >= 50 && marks < 60) {
        cout << "Grade E" << "\n";
    } else {
        cout << "Fail" << "\n";
    }

    // ================================
    // Problem 6 : Vowel or Constant
    // ================================

    char ch;
    cout << "Enter character(Lowercase): ";
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "It is vowel" << "\n";
    } else {
        cout << "It is a constant." << "\n";
    }

    // ===============================
    // Problem 7 : Day of week
    // ===============================

    int day;
    cout << "Enter day: ";
    cin >> day;

    switch(day) {
        case 1: cout << "Monday" << "\n"; break;
        case 2: cout << "Tuesday" << "\n"; break;
        case 3: cout << "Wednesday" << "\n"; break;
        case 4: cout << "Thursday" << "\n"; break;
        case 5: cout << "Friday" << "\n"; break;
        case 6: cout << "Saturday" << "\n"; break;
        case 7: cout << "Sunday" << "\n"; break;
        default: cout << "Invalid" << "\n";
    }

    return 0;
}