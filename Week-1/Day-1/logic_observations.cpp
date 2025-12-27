#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
    ===========================================
    Observation 1 - Integer v/s Float Devision
    ===========================================
    */
   /*
   int a, b;
   cout << "Enter two numbers: ";
   cin >> a >> b;

   cout << a / b << "\n";   // Integer Devision
   cout << (double)a / b << "\n"; // Floating Division

   */

   /*
   ===================================
   Observation 2 - Overflow behaviour
   ===================================
   */
   /*

   int x = INT_MAX;
   cout << x << "\n";
   cout << x + 1 << "\n";     // Overflow

   */

   /*
   ================================
   Observation 3 - Precision Check
   ================================
   */

   double y = 0.1 + 0.3;
   cout << y << "\n";
   
   return 0;
}