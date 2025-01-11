#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x,n;
    cin>>x>>n;
 
    vector<int>p(n);
    for(int i=0;i<n;i++)cin>>p[i];
 
    multiset<int>st;
 
    st.insert(x);
    set<int>pos;
    pos.insert(0);
    pos.insert(x);
    for(int i=0;i<n;i++){
 
        if(p[i]==0||p[i]==x){
            cout<<*st.rbegin()<<" ";
            continue;
        }
 
        auto it=pos.upper_bound(p[i]);
        int ind1=*it;
        int ind2=*(--it);
        st.erase(st.find(ind1-ind2));
        pos.insert(p[i]);
        st.insert(p[i]-ind2);
        st.insert(ind1-p[i]);
        cout<<*st.rbegin()<<" ";
 
    }cout<<"\n";
 
    return 0;
}