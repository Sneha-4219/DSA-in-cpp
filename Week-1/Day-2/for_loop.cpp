#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // ===================
    // FOR LOOP SYNTAX
    // -------------------
    // for(initialization; condition; updation){
    //     loop body
    // }
    // ===================
    
    for(int i = 0; i < 2; i++) {
        cout << i << " ";
    }
    cout << endl;

    // =======================================
    // Example 1 : Print numbers from 1 to 5
    // =======================================

    for(int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // =============================
    // Example 2: Reverse Counting
    // =============================

    for(int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    // ===========================================
    // Example 3 : Skip odd numbers (update step)
    // ===========================================

    for(int i = 0; i <= 10; i+=2) {
        cout << i << " ";
    }
    cout << endl;

    // =============================
    // Example 4 : Using break at 5
    // =============================

    for(int i = 1; i <= 10; i++){
        cout << i << " ";
        if(i == 5) {
            break;
        }
    }
    cout << endl;

    // ===========================
    // Example 5 : Using continue
    // ===========================

    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}