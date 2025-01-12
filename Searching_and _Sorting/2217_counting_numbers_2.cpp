#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1),p(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        p[a[i]]=i;
    }
    int count=1;
   // sort(a.begin(),a.end());

    for(int i=2;i<=n;i++){

        if(p[i]<p[i-1]){
            count++;
        }
    }

    while(m--){

        set<pair<int,int>>st;

        int u,v;
        cin>>u>>v;

        int num1=a[u];
        int num2=a[v];

        st.insert({num1-1,num1});
        st.insert({num1,num1+1});
        st.insert({num2-1,num2});
        st.insert({num2,num2+1});

        for(auto it:st){
            if(p[it.first]>p[it.second]){

                count--;
            }
        }

        swap(a[u],a[v]);
        p[a[u]]=u;
        p[a[v]]=v;

         for(auto it:st){
            if(p[it.first]>p[it.second]){
                count++;
            }
        }
    cout<<count<<endl;
    }


    return 0;
}