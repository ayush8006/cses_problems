#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll max_val = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }

    vector<ll> freq(max_val + 1, 0);
    for (ll i = 0; i < n; ++i) freq[a[i]]++;

    map<int,int>mp;
    vector<bool>prime(max_val+1,true);
    prime[0]=prime[1]=false;

    for(int i=2;i<=max_val;i++){

        if(prime[i]){

            for(int j=i;j<=max_val;j+=i){
                prime[j]=false;
                mp[i]+=freq[j];
            }

        }

    }

    long long ans=n*(n-1)/2;
   // cout<<ans<<endl;

    for(auto it:mp){
        

        ans-=(it.second*(it.second-1))/2;
       //  cout<<it.first<<" "<<it.second<<" "<<ans<<endl;


    }



    cout << ans<< "\n";
    return 0;
}
