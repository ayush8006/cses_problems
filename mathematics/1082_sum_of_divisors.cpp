#include <iostream>
using namespace std;

typedef long long ll;
const int mod=1e9+7;

int main() {
    ll n;
    cin >> n;
    ll res = 0, i = 1;
    while (i <= n) {
        ll q = n / i;
        ll j = n / q;
        res += (q * ((j - i + 1) * (i + j) / 2)%mod)%mod;
        i = j + 1;
    }
    cout << res%mod << endl;
    return 0;
}
