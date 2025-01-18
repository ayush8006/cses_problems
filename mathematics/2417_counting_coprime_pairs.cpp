#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll max_val = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }

    vector<ll> freq(max_val + 1, 0);
    for (ll i = 0; i < n; ++i) freq[a[i]]++;

    vector<ll> count(max_val + 1, 0);
    for (ll i = 1; i <= max_val; ++i) {
        for (ll j = i; j <= max_val; j += i) count[i] += freq[j];
    }

    vector<ll> mu(max_val + 1, 1);
    for (ll i = 2; i <= max_val; ++i) {
        if (mu[i] == 1) {
            for (ll j = i; j <= max_val; j += i) mu[j] *= -1;
            for (ll j = i * i; j <= max_val; j += i * i) mu[j] = 0;
        }
    }

    ll result = 0;
    for (ll i = 1; i <= max_val; ++i) {
        result += mu[i] * (count[i] * (count[i] - 1) / 2);
    }

    cout << result << "\n";
    return 0;
}
