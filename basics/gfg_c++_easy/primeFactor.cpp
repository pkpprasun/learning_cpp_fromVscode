#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

void printPrimeFactorization(int n) {
    vector<int> res;

    // factor 2
    if (n % 2 == 0) {
        res.push_back(2);
        while (n % 2 == 0) {
            n /= 2;
        }
    }

    // odd factors
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            res.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    // remaining prime
    if (n > 2) {
        res.push_back(n);
    }

    // print result
    for (int x : res) {
        cout << x << " ";
    }
}

// ✅ ENTRY POINT
int main() {
    int n = 100;  // test value
    printPrimeFactorization(n);
    return 0;
}