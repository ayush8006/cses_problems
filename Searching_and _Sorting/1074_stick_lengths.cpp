#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n; 
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(),nums.end());

    int el=nums[(n+1)/2-1];

    long ans=0;
    for(int i=0;i<n;i++)ans+=abs(el-nums[i]);
    cout<<ans<<"\n";
    return 0;
}