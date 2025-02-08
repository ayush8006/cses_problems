#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin>>s;
    sort(s.begin(),s.end());

    string s1="",s2="";
    s1+=s[0];
    s2+=s[k-1];
    if(s[0]<s[k-1]){
        cout<<s2<<endl;
        return;
    }
    set<char>st;
    for(int i=k;i<n;i++){
        st.insert(s[i]);

    }
    //cout<<s.size()<<endl;


    if(st.size()>1){
         s1 += s.substr(k,n-k);
        cout<<s1<<"\n";
        return;
    }
    else{
       // cout<<(n-k)/k<<endl;
       // cout<<(((n-k)%k>0)?1:0)<<endl;
        int count=(n-k)/k+(((n-k)%k > 0) ? 1 : 0);
        //cout<<count<<endl;
        for(int i=0;i<count;i++){
            s1+=s[k];
        }
        cout<<s1<<"\n";
        return;

    }

   
    
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
