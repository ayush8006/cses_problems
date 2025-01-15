#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int>v(1e6+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[x]++;
    }  

    int rs=1;
    for (int i = 2; i <= 1e6; i++) {
        int c=0;
        for (int j = i; j <= 1e6; j += i) {
            c+=v[j];                 
            
        }
        if(c>=2)rs=max(rs,i);

    }

    cout<<rs<<"\n";
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   
    solve();
    return 0;
}
