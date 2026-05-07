#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

// The function requested by GeeksforGeeks
vector<int> DuplicateMe(vector<int>& arr) {
    vector<int> res;
    unordered_set<int> s1; // Tracks every number we see
    unordered_set<int> s2; // Tracks duplicates we've already added

    // 1. Identify duplicates in the order they first appear
    for (int i = 0; i < arr.size(); i++) {
        int val = arr[i];
        if (s1.find(val) != s1.end()) {
            // If it's a duplicate and we haven't recorded it in res yet
            if (s2.find(val) == s2.end()) {
                res.push_back(val);
                s2.insert(val);
            }
        } else {
            s1.insert(val);
        }
    }

    // 2. Use an iterator to print the result vector
    // (Using full type instead of 'auto' to avoid VS Code warnings)
    vector<int>::iterator it = res.begin();
    while (it != res.end()) {
        cout << *it << " ";
        it++;
    }

    cout << endl; // Required extra line
    return res;
}

// The main function (Required for VS Code to run/debug)
int main() {
    // Example test case: 1 appears twice, then 2 appears twice
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    cout << "Duplicates found: ";
    DuplicateMe(arr);

    return 0;
}