#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define int long long
// Fast I/O setup
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(){
    long long a,b;
    cin>>a>>b;

    int  ans=1;

    while(b){
        if(b&1){
            
            ans=(ans*a)%mod;
            //cout<<ans<<" "<<a<<"\n";
        }

        a=(a*a)%mod;
        b=(b>>1);
    }

    cout<<ans<<"\n";
}

// Main function
int32_t main() {
    fast_io();

    // Example usage
    int t; 
    cin >> t;  // Read number of test cases
    while (t--) {
        solve();
    }

    return 0;
}
