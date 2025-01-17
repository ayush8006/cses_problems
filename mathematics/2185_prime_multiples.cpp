#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Function to calculate GCD
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to calculate LCM
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return a / gcd(a, b) * b;
}

int main() {
    long long m;
    long long n;
    cin >> m>> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long result = 0;

    // Iterate over all subsets using bitmasking
    for (int mask = 1; mask < (1 << n); ++mask) {
        long long current_lcm = 1;
        int bits = 0;

        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                if(current_lcm)
                current_lcm = (current_lcm*a[i]);
                if (current_lcm > m) break; // Optimization: No need to consider if lcm exceeds m
                ++bits;
            }
        }

        if (current_lcm > m) continue;

        // Inclusion-Exclusion: Add or subtract based on the number of bits
        if (bits % 2 == 1) {
            result += m / current_lcm;
        } else {
            result -= m / current_lcm;
        }
    }

    cout << result << endl;
    return 0;
}
