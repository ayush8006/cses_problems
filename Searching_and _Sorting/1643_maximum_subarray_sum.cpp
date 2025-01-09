#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n ;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    long cur_sum=0;
    long ans=INT_MIN;

    for(int i=0;i<n;i++){
        cur_sum+=nums[i];

        ans=max(ans,cur_sum);

        if(cur_sum<0){
            cur_sum=0;
        }
    }

    cout<<ans<<"\n";


    return 0;
}
