#include <bits/stdc++.h>
using namespace std;

int main() {

    // ==========================
    // WHILE LOOP SYNTAX
    // --------------------------
    // while(condition) {
    //     loop body
    // }
    // ==========================

    // ========================================
    // Example 1 :- Print numbers from 1 to 5
    // ========================================

    int i = 1;
    while(i <= 5) {
        cout << i << " ";
        i++;
    }

    // ========================================
    // Example 2 :- Sum of first five numbers
    // ========================================
    
    int i = 1;
    int sum = 0;
    while(i <= 5) {
        sum += i;
        i++;
    }
    cout << "Sum is: " << sum << endl;

    // =======================================
    // Example 3 :- Infinite loop (Dangerous)
    // =======================================

    // int i = 1;
    // while(i <= 5) {
    //     cout << i << " ";
    //        i++; -> missing -> infinite loop
    // }

    // ===========================
    // Example 4 :- While break
    // ===========================

    int i = 1;
    while(true) {
        if(i == 5) {
            break;
        }
        cout << i << " ";
        i++;
    }

    // =======================================
    // Example 5 :- While continue
    // =======================================

    int i = 0;
    while(i < 5) {
        i++;
        if(i == 3) {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}