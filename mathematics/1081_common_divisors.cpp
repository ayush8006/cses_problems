#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> piles(n);

    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int nim_sum = 0;
    for (int pile : piles) {
        nim_sum ^= pile;
    }

    if (nim_sum == 0) {
        cout << "Second" << '\n'; // Second player wins
    } else {
        cout << "First" << '\n'; // First player wins
    }

    return 0;
}
