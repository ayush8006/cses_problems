#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 205;
const int MAX_K = 205;

bool dp[MAX_N][MAX_K]; // DP table

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    int total = 0;  // Total number of berries

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        total += a[i] + b[i]; // Calculate total berries
    }

    dp[0][0] = true; // Base case: No shrubs → 0 extra red berries

    // Process each shrub
    for (int i = 0; i < n; i++) {
        bool ndp[MAX_N][MAX_K] = {false}; // Temporary DP for next step
        
        // Try all previous extra red berry counts
        for (int j = 0; j < k; j++) {
            if (!dp[i][j]) continue; // Ignore impossible cases
            
            // Try leaving `l` extra red berries from this shrub
            for (int l = 0; l <= min(k - 1, a[i]); l++) {
                if ((a[i] - l) % k + b[i] >= k) {
                    ndp[i + 1][l] = true;
                }
            }
        }
        swap(dp, ndp); // Move to the next DP state
    }

    int answer = 0;
    for (int j = 0; j < k; j++) {
        if (dp[n][j]) {
            answer = max(answer, (total - j) / k);
        }
    }

    cout << answer << endl; // Maximum full baskets
    return 0;
}
