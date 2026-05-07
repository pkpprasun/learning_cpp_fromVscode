#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> pattern(int n) {
        vector<string> ok;
        int left = 1;
        int right = n * (n + 1); // Total numbers used in the pattern
        
        for (int i = 0; i < n; i++) {
            string row = "";
            
            // 1. Add leading dashes (2 dashes per row index)
            for (int j = 0; j < i; j++) row += "--";
            
            // 2. Add Left side numbers (n-i numbers)
            for (int j = 0; j < (n - i); j++) {
                row += to_string(left++) + "*";
            }
            
            // 3. Add Right side numbers (n-i numbers)
            int rightStart = right - (n - i) + 1;
            for (int j = 0; j < (n - i); j++) {
                row += to_string(rightStart++);
                if (j < (n - i) - 1) row += "*"; 
            }
            
            // 4. Shrink the right-side pool for the next row
            right -= (n - i);
            
            ok.push_back(row);
        }
        return ok;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    n=4;

    Solution ob;
    vector<string> result = ob.pattern(n);

    // Print each string in the vector
    for (string s : result) {
        cout << s << endl;
    }

    return 0;
}