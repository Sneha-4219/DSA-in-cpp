#include <bits/stdc++.h>
using namespace std;

int main() {

    // -------------------------
    // 1. Frequency of elements
    // -------------------------

    vector<int> v = {1, 2, 2, 5, 5, 4, 5, 5, 2, 1, 2};
    unordered_map<int, int> freq;

    for(int x : v) {
        freq[x]++;
    }

    cout << "\nFrequency of elements: " << endl;
    for(const auto &p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    // -------------------------------
    // 2. First non-repeating element
    // -------------------------------

    cout << "\n";
    for(int x : v) {
        if(freq[x] == 1) {
            cout << "Element with freq 1: " << x << endl;
            break;
        }
    }

    // ------------------------------------
    // 3. Character frequency in a string
    // ------------------------------------

    string s = "papaya";
    unordered_map<char, int> charFreq;

    for(char ch : s) {
        charFreq[ch]++;
    }

    cout << "\nCharacter Frequency: " << endl;
    for(const auto &p : charFreq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;

}