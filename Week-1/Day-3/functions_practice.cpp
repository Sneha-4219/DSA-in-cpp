#include <bits/stdc++.h>
using namespace std;

/*
----------------------------
1. Prime Number Check
----------------------------
Returns true if n is prime
*/

bool isPrime(int n){
    if( n <= 1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

/*
----------------------------------
2. Swap using Pass by value
(No effect in original variables)
----------------------------------
*/

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

}

/*
----------------------------------
3. Swap using Pass by reference
(Original variables are changed)
----------------------------------
*/

void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

}

/*
--------------------------------
4 . Maximum of three numbers
--------------------------------
*/

int maxOfThree(int x, int y, int z) {
    int maxVal = x;
    if(y > maxVal) {
        maxVal = y;
    }
    if(z > maxVal) {
        maxVal = z;
    }

    return maxVal;
}

/*
---------------------------------
5. Count numbers from 1 to n 
-> divisible by 2 or 3
-> but not divisible by both
---------------------------------
*/

int countValid(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++) {
        if((i % 2 == 0 || i % 3 == 0) && !(i % 2 == 0 && i % 3 == 0)) {
            cout << i << " ";
            count ++;
        }
    }
    cout << "\n";
    return count;
}

/*
------------------------------------
6. Sum numbers from 1 to n 
-> Stop adding when sum exceeds 50
------------------------------------
*/

int sumUntilLimit(int n1) {
    int sum = 0;
    for(int i = 1; i <= n1; i++) {
        if(sum > 50) {
            break;
        }
        sum += i;
    }
    return sum;
}

int main() {

    // Prime Check
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n)) {
        cout << n << " is a prime number." << "\n";
    } else {
        cout << n << " is not a prime number." << "\n";
    }

    // Swap by value
    int a, b;
    cout << "Enter two numbers: " << "\n";
    cin >> a >> b;

    swapByValue(a, b);
    cout << "After swapping (Swap by value): " << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    // Swap by reference
    swapByRef(a, b);
    cout << "After swapping (Swap by reference): " << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    // Maximum of three numbers
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    int max = maxOfThree(x, y, z);
    cout << "Maximum is: " << max << "\n";

    // Count numbers
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = countValid(num);
    cout << "Count: " << count << "\n";

    // Sum numbers
    int n1;
    cout << "Enter a number: ";
    cin >> n1;
    
    int sum = sumUntilLimit(n1);
    cout << "Sum = " << sum << "\n";


    return 0;
}