#include <bits/stdc++.h>
using namespace std;

// Swap using references
void swapNumbers(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;

}

int main() {

    int x = 10, y = 20;
    cout << "Original Numbers: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cout << "After Swapping: " << endl;
    swapNumbers(x, y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    

    return 0;
}