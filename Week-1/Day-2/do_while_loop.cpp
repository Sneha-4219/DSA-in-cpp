#include <bits/stdc++.h>
using namespace std;

int main() {

    // ===============================
    // DO-WHILE LOOP SYNTAX
    // -------------------------------
    // do {
    //     loop body
    // } while (condition);
    // ===============================

    // ===================================================
    // Example - 1 : Runs once even if condition is false
    // ===================================================

    int i = 10;
    do{
        cout << i << " ";
        i++;

    }while(i <= 5);

    // ===============================
    // Example - 2 : Normal Counting
    // ===============================

    int i = 1;
    do {
        cout << i << " ";
        i++;

    }while(i <= 10);

    // ================================
    // Example - 3 : Menu-driven Logic
    // ================================

    int choice;

    do {
        cout << "1. Say Hi \n";
        cout << "2. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

    } while (choice != 2);

    return 0;
}