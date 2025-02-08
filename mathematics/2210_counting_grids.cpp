#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;


long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {

    ll n;
    cin>>n;

    ll res=0;

    //burnside lemma

    if((n&1)==0){

        res=power(2,n*n,MOD)+2*power(2,n*n/4,MOD)+power(2,n*n/2,MOD);
        res=res*power(4,MOD-2,MOD);
        res=res%MOD;

    }else{

        res=(power(2,n*n,MOD)+4*power(2,(n*n-1)/4,MOD)+2*power(2,(n*n-1)/2,MOD))%MOD;
       //  cout<<res<<endl;

         res=res*power(4,MOD-2,MOD);
        res=res%MOD;

    }

    cout<<res<<endl;


    //odd
   

    return 0;
}
