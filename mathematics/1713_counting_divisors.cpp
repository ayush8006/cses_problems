#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 1000000;
int divisor_count[MAX + 1];

void precompute() {
    for (int i = 1; i <= MAX; i++) {
        for (int j = i; j <= MAX; j += i) {
            divisor_count[j]++;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << divisor_count[x] << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    precompute();
    solve();
    return 0;
}
