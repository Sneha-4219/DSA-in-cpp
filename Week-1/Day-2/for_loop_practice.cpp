#include <bits/stdc++.h>
using namespace std;
int main(){

    // =======================================
    // Problem 1 :- Print numbers from 1 to n
    // =======================================

    int n;
    cout << "Enter number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;

    // ============================================
    // Problem 2 :- Sum of first n natural numbers
    // ============================================

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << "\n";

    // ==================================
    // Problem 3 :- Even numbers till N
    // ==================================

    int n;
    cout << "Enter number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // =====================================
    // Problem 4: Count digits of a number
    // =====================================

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    for(; n > 0; n/=10) {
        count++;
    }
    cout << "Number of digits: " << count << "\n";

    // ==================================
    // Problem 5 : Check prime (Logic)
    // ==================================

    int n;
    cout << "Enter number: ";
    cin >> n;

    bool is_prime = true;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            is_prime = false;
            break;
        }
    }
    if(is_prime) {
        cout << n << " is prime." << "\n";
    } else {
        cout << n << " is not prime" << "\n";
    }

    return 0;
}