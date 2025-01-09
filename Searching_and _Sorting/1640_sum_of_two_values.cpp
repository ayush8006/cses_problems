#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n;i++){


        int num=nums[i];

        int rem=x-num;

        if(mp.find(rem)!=mp.end()){
            cout<<mp[rem]+1<<" "<<i+1<<"\n";
            return 0;
        }

        mp[num]=i;

    }

    cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}
