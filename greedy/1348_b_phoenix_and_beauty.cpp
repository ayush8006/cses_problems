#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> mp;
    int maxfreq = 0;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        maxfreq = max(maxfreq, mp[a[i]]);
    }

    if (mp.size() > k) {
        cout << -1 << endl;
        return;
    }

    vector<int> ans;
    set<int> st;

    for (auto it : mp) {
        ans.push_back(it.first);
        st.insert(it.first);
    }

    for (int i = 1; i <= k; i++) {
        if (ans.size() == k) break;
        if (st.find(i) == st.end()) ans.push_back(i);
    }

    int final_size = 1e4;

    vector<int> res;
    while ((int)res.size() < final_size) {
        for (int j = 0; j < k; j++) {
            res.push_back(ans[j]);
            if(res.size()==1e4)break;
        }
        
    }

    cout << res.size() << "\n";
    for (auto it : res) {
        cout << it << " ";
    }
    cout << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
