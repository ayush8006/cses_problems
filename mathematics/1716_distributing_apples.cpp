#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
int mod_inv(int num,int b){
int ans=1;
    while(b){
        if(b&1){
            ans=ans*(num)%mod;
        }

        num=(num*num)%mod;
        b=(b>>1);
    }
    return ans;
}

int compute(int a,int b) {
    int res=1;
    for(int i=1;i<=b;i++)
    {
        res=(res*(a-i+1))%mod;
        res=(res*mod_inv(i,mod-2))%mod;     

    }
    return res%mod;  
}

void solve() {
    int n,m;
    cin >> n>>m;
    int res=compute(n+m-1,m);
    cout<<res<<"\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);  
    solve();
    return 0;
}
