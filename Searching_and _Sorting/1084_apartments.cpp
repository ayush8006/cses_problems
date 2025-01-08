#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FAST_IO;


    int n,m,k;
    cin>>n>>m>>k;

    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i=0;
    int j=0;
    int count=0;

    while(i<n and j<m){

        while(j<m and b[j]<a[i]-k)j++;

        while(i<n and a[i]+k<b[j])i++;

        if(j<m and b[j]<=a[i]+k and b[j]>=a[i]-k){
            count++;
            j++;
            i++;
        }

       

    }
    cout<<count<<"\n";
    
    return 0;
}
