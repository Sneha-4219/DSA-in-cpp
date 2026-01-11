#include <bits/stdc++.h>
using namespace std;

int main() {

    queue<int> q;

    // Push elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Front element
    cout << "Front: " << q.front() << endl;
    
    // Back element
    cout << "Back: " << q.back() << endl;

    // pop element
    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    // size of queue
    cout << "Size: " << q.size() << endl;

    // empty check
    if(q.empty()) {
        cout << "Queue is empty!\n";
    } else {
        cout << "Queue is not empty!\n";
    }

    return 0;
    
}