#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;

    map<int,int>mp;
    int ans=INT_MIN;

    for(int i=0;i<n;i++){
        mp[a[i]]++;

        while(mp.size()<i-l+1){
            mp[a[l]]--;
            if(mp[a[l]]==0)mp.erase(a[l]);
            l++;
        }
        ans=max(ans,i-l+1);


    }
    cout<<ans<<endl;
    return 0;
}