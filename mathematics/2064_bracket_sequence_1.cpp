#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;


// Function to compute modular exponentiation
long long pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute the nth Catalan number using direct formula with modulo
long long catalanNumber(int n) {
    long long res = 1;
    for (int i = 0; i < n; ++i) {
        res = res * (2 * n - i) % MOD;
        res = res * pow(i + 1, MOD - 2, MOD) % MOD; // Modular inverse of (i + 1)
    }
    return res * pow(n + 1, MOD - 2, MOD) % MOD; // Modular inverse of (n + 1)
}


int main() {
    int n;
    cin >> n; // Input n

    if (n % 2 != 0) {
        cout << "0\n"; // n must be even to have a valid Catalan index
    } else {
        cout << catalanNumber(n / 2) << "\n";
    }

    return 0;
}
