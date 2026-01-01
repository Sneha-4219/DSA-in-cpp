#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------
// 1. Find element with maximum frequency
// ---------------------------------------

int findMaxFreq(vector<int> v) {
    int maxFreq = INT_MIN;
    unordered_map<int, int> freq;

    for(int x : v) {
        freq[x]++;
    }

    for(int x : v) {
        if(freq[x] > maxFreq) {
            maxFreq = x;
        }
    }
    return maxFreq;

}

// ------------------------------------------
// 2. Return first element that appears once
// -------------------------------------------

void firstNonRepeating(vector<int> v) {
    unordered_map<int, int> freq;

    for(int x : v) {
        freq[x]++;
    }

    for(int x : v) {
        if(freq[x] == 1) {
            cout << "First non-repeating element: " << x << "\n";
            break;
        }
    }
}

// --------------------------------------------------------------
// 3. Check if there exists two numbers whose sum equals target.
// (Returns only YES or No)
// --------------------------------------------------------------

bool twoSum(vector<int> v, int target) {
    unordered_set<int> seen;

    for(int x : v) {
        int need = target - x;

        if(seen.find(need) != seen.end()) {
            return true;
        }

        seen.insert(x);
    }

    return false;

}

// Leetcode version (To return indices of numbers)

vector<int> twoSum2(vector<int> v, int target) {
    unordered_map<int, int> mp;
    for(int i = 0; i < v.size(); i++) {
        int need = target - v[i];

        if(mp.find(need) != mp.end()) {
            return{mp[need], i};
        }

        mp[v[i]] = i;
    }

    return {};
}

// ------------------------------------
// 4. Count number of unique elements
// ------------------------------------

void countUnique(vector<int> v) {
    unordered_set<int> us;

    for(int x : v) {
        us.insert(x);
    }

    cout << "Number of unique elements: " << us.size() << "\n";

}

// -------------------------------------
// 5. Character with maximum occurrence
// -------------------------------------

void maxOccurrence(string s) {
    int maxFreq = INT_MIN;
    char ch;
    unordered_map<char, int> charFreq;

    for(char x : s) {
        charFreq[x]++;
    }

    for(char x : s) {
        if(charFreq[x] > maxFreq) {
            ch = x;
        }
    }
    cout << "Character with maximum occurrence: " << ch << "\n";

}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "\n";

    int maxFreq = findMaxFreq(v);
    cout << "Maximum frequency element: " << maxFreq << "\n";

    firstNonRepeating(v);
    countUnique(v);

    string s = "Programming";
    maxOccurrence(s);

    int target;
    cout << "Enter target: ";
    cin >> target;

    if(twoSum(v, target)) {
        cout << "Yes, numbers exists with sum " << target << "\n";
    } else {
        cout << "No";
    }

    vector<int> result = twoSum2(v, target);
    if(!v.empty()) {
        cout << "Yes\n";
        cout << result[0] << ", " << result[1] << "\n";

    } else {
        cout << "No\n";
    }

    return 0;

}