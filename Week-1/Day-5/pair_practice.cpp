#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // ------------------------------------
    // 1. Store student data (roll, marks)
    // ------------------------------------

    int n;
    cout << "Enter vector size: ";
    cin >> n;

    vector<pair<int, int>> students;
    for(int i = 0; i < n; i++) {
        int roll, marks;
        cout << "Enter roll no " << i+1 << ": ";
        cin >> roll;
        cout << "Enter marks " << i+1 << ": ";
        cin >> marks;

        students.push_back({roll, marks});

    }

    for(const auto &p : students) {
            cout << "Roll No: " << p.first << ", Marks: " << p.second << endl;
    }

    cout << endl;

    // ------------------------------
    // 2. Store coordinates (x, y)
    // ------------------------------

    int m;
    cout << "Enter number of coordinate pairs: ";
    cin >> m;

    vector<pair<int, int>> coordinates;

    for(int i = 0; i < m; i++) {
        int x, y;
        cout << "Enter x coordinate " << i+1 << ": ";
        cin >> x;
        cout << "Enter y coordinate " << i+1 << ": ";
        cin >> y;

        coordinates.push_back({x, y});
    }

    for(const auto &p : coordinates) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    cout << endl;

    // -----------------
    // 3. Generic input
    // -----------------

    int k;
    cout << "Enter size: ";
    cin >> k;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        v.push_back({a, b});
    }

    for(const auto &p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;

}