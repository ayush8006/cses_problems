#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9+7; // A large value representing "infinity"

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // DP array to store the minimum coins needed for each sum
    vector<int> dp(x + 1, 0);
    dp[0] = 1; // Base case: 0 coins needed to form sum 0

    for (int i = 1; i <= x; i++) {
        for (int c : coins) {
            if (i - c >= 0) {
                dp[i] =(dp[i]+dp[i - c])%MOD ;
            }
        }
    }

    // If dp[x] is still INF, it's not possible to form the sum x
    cout << (dp[x] %MOD) << "\n";

    return 0;
}
