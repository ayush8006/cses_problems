#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int count=1;

    sort(a.begin(),a.end(),comp);
    int end=a[0].second;


    for(int i=1;i<n;i++){

        if(a[i].first>=end){
            count++;
            end=a[i].second;
        }
    }
    cout<<count<<"\n";


   return 0;
}