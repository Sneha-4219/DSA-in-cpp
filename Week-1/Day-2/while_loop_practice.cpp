#include <bits/stdc++.h>
using namespace std;

int main() {

    // ======================================
    // Problem 1 :- Count digits of a number
    // ======================================
    int n;
    cout << "Enter number: ";
    cin >> n;

    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    cout << "Number of digits: " << count << "\n";

    // ===============================
    // Problem 2 :- Reverse a number
    // ===============================
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int rev = 0;
    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    cout << "Reversed number: " << rev << "\n";

    // ===========================
    // Problem 3 :- Sum of digits
    // ===========================
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << "\n";

    // ================================
    // Problem 4 :- Check Palindrome
    // ================================
    int n;
    cout << "Enter number: ";
    cin >> n;

    int original = n;
    int rev = 0;
    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if(original == rev) {
        cout << original << " is a palindrome." << "\n";
    } else {
        cout << original << " is not a palindrome." << "\n"; 
    }

    // =============================
    // Problem 5 :- Find Factorial
    // =============================
    int n;
    cout << "Enter number: ";
    cin >> n;

    int fact = 1;
    int i = 1;
    while(i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << fact << "\n";

    // ==============================================
    // Problem 6 :- Sum of even numbers from 1 to n
    // ==============================================
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    int sumOfEven = 0;
    while(i <= n) {
        if(i % 2 == 0) {
            sumOfEven += i;
        }
        i++;
    }
    cout << "Sum of even numbers: " << sumOfEven << "\n";

    // ==========================================================================
    // Problem 7 :- Print numbers from 1 to 100 stop when num is div by 7 and 11
    // ==========================================================================
    
    int i = 1;
    while(i <= 100) {
        if(i % 7 == 0 && i % 11 == 0) {
            break;
        }
        cout << i << " ";
        i++;
    }

    return 0;
}