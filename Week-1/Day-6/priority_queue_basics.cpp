#include <bits/stdc++.h>
using namespace std;

int main() {

    // ------------- MAX HEAP (default) -------------
    priority_queue<int> maxpq;

    maxpq.push(10);
    maxpq.push(30);
    maxpq.push(20);

    cout << "Top of max heap: " << maxpq.top() << endl;

    maxpq.pop();
    cout << "After popping, top of maxheap = " << maxpq.top() << endl;

    // --------------- MIN HEAP ----------------
    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(10);
    minpq.push(30);
    minpq.push(20);

    cout << "Top of min heap: " << minpq.top() << endl;

    minpq.pop();
    cout << "After popping, top of minheap = " << minpq.top() << endl;

    // --------------- TOP-K CONCEPT ----------------
    vector<int> nums = {5, 2, 8, 1, 9, 3};
    int k = 3;
    
    priority_queue<int, vector<int>, greater<int>> kHeap;

    for(int x : nums) {
        kHeap.push(x);
        if(kHeap.size() > 3) {
            kHeap.pop();
        }
    }
    
    cout << "Kth largest element (k=3): " << kHeap.top() << endl;
    
    return 0;
}