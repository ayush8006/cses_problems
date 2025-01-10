#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;;;
    cin >> n ;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(),nums.end());

    long ans=1;

    for(int i=0;i<n;i++){
        if(nums[i]>ans){
            cout<<ans<<"\n";
            return 0;
        }
        ans+=nums[i];
    }
    cout<<ans<<"\n";
     return 0;
}
