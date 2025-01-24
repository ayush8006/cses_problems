#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

ll fact[1000001];
ll inv_fact[1000001];
ll mod_exp(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

ll mod_inverse(ll x, ll mod) {
    return mod_exp(x, mod - 2, mod);
}

void precompute_factorials(int n, ll mod) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    inv_fact[n]=mod_inverse(fact[n],mod);
    for(int i=n-1;i>=0;i--){
        inv_fact[i]=((i+1)*inv_fact[i+1])%mod;
    }
}


int main() {
    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    precompute_factorials(s.size(), MOD);

  
    ll total_permutations = fact[s.size()];
    for (auto it: freq) {
        total_permutations = (total_permutations * inv_fact[it.second]) % MOD;
    }

    cout << total_permutations << "\n";

    return 0;
}
