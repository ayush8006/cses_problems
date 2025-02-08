#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int>res;

    for(int i=1;i<=n;i*=2){

        res.push_back(i);
        n-=i;

    }
    if(n)res.push_back(n);

    sort(res.begin(),res.end());
    cout<<res.size()-1<<endl;

    for(int i=1;i<res.size();i++){
        cout<<res[i]-res[i-1]<<" ";
    }cout<<endl;

   
    
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
