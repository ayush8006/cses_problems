#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int high=(1<<n);
    int lower=(1<<n)-2;

    for(int i=1;i<n/2;i++){

        high+=(1<<i);
        lower=lower-(1<<i);

       // cout<<high<<" "<<lower<<" "<<(1<<i)<<endl;
    }

    cout<<high-lower<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
