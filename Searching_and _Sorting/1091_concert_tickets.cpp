#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FAST_IO;


    int n,m;
    cin>>n>>m;
    vector<int>h(n),t(m);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<m;i++){
        cin>>t[i];
    }
    multiset<int>st(h.begin(),h.end());

    //sort(h.begin(),h.end());
    //vector<bool>used;

    vector<int>ans;

    for(int i=0;i<m;i++){

        int el=t[i];

        auto it=st.upper_bound(el);

        if(!st.empty() and it!=st.begin()){
            it--;
            cout<<*it<<"\n";
            st.erase(st.find(*it));
        }
        else{
            cout<<-1<<"\n";
        }

    }   

    return 0;

}