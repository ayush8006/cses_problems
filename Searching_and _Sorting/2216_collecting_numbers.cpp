#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    int count=1;
    sort(a.begin(),a.end());

    for(int i=1;i<n;i++){

        if(a[i].second<a[i-1].second){
            count++;
        }
    }
    cout<<count<<endl;


    return 0;
}