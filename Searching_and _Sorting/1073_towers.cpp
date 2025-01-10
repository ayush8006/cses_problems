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
    vector<int>lds;

    for(int i=0;i<n;i++){
        if(lds.size()==0||lds.back()<=a[i]){
            lds.push_back(a[i]);
        }

        else{
            auto it=upper_bound(lds.begin(),lds.end(),a[i]);
            *it=a[i];
        }
    }
    cout<<lds.size()<<"\n";

    return 0;
}