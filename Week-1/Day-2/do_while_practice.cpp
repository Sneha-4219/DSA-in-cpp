#include <bits/stdc++.h>
using namespace std;

int main() {

    // ==============================================
    // Problem 1 :- Print numbers until user enters 0
    // ==============================================

    int n;
    do {
        cout << "Enter number: ";
        cin >> n;
        if(n != 0) {
            cout << "Number is: " << n << "\n";
        }

    } while (n != 0);


    // ===============================
    // Problem 2 :- Password retry
    // ===============================

    int password;
    do {
        cout << "Enter password: ";
        cin >> password;
        if(password != 1234) {
            cout << "Retry" << endl;
        }

    } while (password != 1234);

    cout << "Access Granted !";

    // ========================================
    // Problem - 3 :- Sum Until user enters -1
    // ========================================

    int n;
    int sum = 0;

    do {
        cout << "Enter number: ";
        cin >> n;
        if(n != -1) {
            sum += n;
        }
    } while(n != -1);
    cout << "Sum is: " << sum << "\n";

    return 0;
}