#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; // A large value representing "infinity"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // DP array to store the minimum coins needed for each sum
    vector<int> dp(x + 1, INF);
    dp[0] = 0; // Base case: 0 coins needed to form sum 0

    for (int i = 1; i <= x; i++) {
        for (int c : coins) {
            if (i - c >= 0) {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }

    // If dp[x] is still INF, it's not possible to form the sum x
    cout << (dp[x] == INF ? -1 : dp[x]) << "\n";

    return 0;
}
