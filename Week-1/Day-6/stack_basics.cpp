#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    // push elements
    st.push(10);
    st.push(20);
    st.push(30);

    // top element
    cout << "Top element: " << st.top() << endl;

    // pop element
    st.pop();
    cout << "After pop, top = " << st.top() << endl;

    // size of stack
    cout << "Size of stack: " << st.size() << endl;

    // empty check
    if(st.empty()) {
        cout <<"Stack is empty.\n";
    } else {
        cout << "Stack is not empty.\n";
    }

    return 0;
    
}