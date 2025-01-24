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
   int n;
   cin>>n;
  precompute_factorials(1000001, MOD);

   while(n--){

    int a,b;
    cin>>a>>b;

    int res=1;
    res=(res*fact[a])%MOD;
    res=(res*inv_fact[b])%MOD;

    res=(res*inv_fact[a-b])%MOD;

    cout<<res<<endl;

   }   

    return 0;
}
