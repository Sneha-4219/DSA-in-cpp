#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;

    // push elements
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << "Deque elements: ";
    for(int x : dq) {
        cout << x << " ";
    }

    cout << endl;

    // Access front and back
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Remove elements
    dq.pop_front();
    dq.pop_back();

    cout << "After popping from both ends: ";
    for(int x : dq) {
        cout << x << " ";
    }
    cout << "\n";

    // Size and empty check
    cout << "Size of deque: " << dq.size() << endl;

    if(dq.empty()) {
        cout << "Deque is empty.\n";
    } else {
        cout << "Deque is not empty.\n";
    }

    return 0;

}