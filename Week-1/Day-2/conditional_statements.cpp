#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
    =========================
    1. If statement
    =========================
    */
   
   int age = 20;
   if(age >= 18) {
    cout << "Adult" << "\n";
   }

   /*
   =========================
   2. If-else statement
   =========================
   */
   int n = 5;
   if(n % 2 == 0) {
    cout << "Even" << "\n";
   } else {
    cout << "Odd" << "\n";
   }

   /*
   =========================
   3. else-if ladder
   =========================
   */
   int marks = 82;
   if(marks >= 90) {
    cout << "A" << "\n";
   } 
   else if (marks >= 75) {
    cout << "B" << "\n";
   } 
   else {
    cout << "C" << "\n";
   }

   /*
   ========================
   4. Nested-if
   ========================
   */
   int a = 20;
   bool hasId = true;

   if(a >= 18) {
    if(hasId) {
        cout << "Allowed!" << "\n";
    }
   }

   /*
   ========================
   5. Switch Statement
   ========================
   */

   int day = 3;
   switch(day) {
    case 1:
        cout << "Monday" << "\n";
        break;
    case 2:
        cout << "Tuesday" << "\n";
        break;
    case 3:
        cout << "Wednesday" << "\n";
        break;
    default:
        cout << "Invalid day !";
   }
   
   return 0;
}