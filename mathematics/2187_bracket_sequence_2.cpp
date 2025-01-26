#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;

long long pow(long long base, long long exp, long long mod) {
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

long long catalanNumber(int n,int r) {
    long long res = 1;
    for (int i = 0; i < r; ++i) {
        res = res * ( n - i) % MOD;
        res = res * pow(i + 1, MOD - 2, MOD) % MOD; // Modular inverse of (i + 1)
    }
    return res%MOD; // Modular inverse of (n + 1)
}


int32_t main() {
    int n;
    cin >> n; 

    string s;
    cin>>s;
    int k=s.size();
    int c1=0,c2=0;

    for(int i=0;i<k;i++){

        if(s[i]=='(')c1++;
        else c2++;

        if(c2>c1){
             cout << "0\n"; 
             return 0;
        }

    }

    
    if (n % 2 != 0 || c2>c1||c1>n/2) {
        cout << "0\n"; // n must be even to have a valid Catalan index


    } else {

        int req1=n/2-c1;
        int req2=n/2-c2;
       

        int ans=((catalanNumber(req1+req2,req1)-catalanNumber(req1+req2,req2+1))+MOD)%MOD;

        cout<<ans<<"\n";


    }

    return 0;
}
