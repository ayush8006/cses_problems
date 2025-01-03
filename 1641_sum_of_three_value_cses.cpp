#include<bits/stdc++.h>
using namespace std;
#define int long long
struct HardHash {
    static const uint64_t FIXED_RANDOM;

    // Mix function for better hash distribution
    static uint64_t mix(uint64_t x) {
        x ^= x >> 43;
        x ^= x << 37;
        x ^= x >> 29;
        x *= 2685821657736338717ULL;
        return x;
    }

    size_t operator()(uint64_t x) const {
        return mix(x + FIXED_RANDOM);
    }
};

// Fixed random seed based on current time
const uint64_t HardHash::FIXED_RANDOM = std::chrono::steady_clock::now().time_since_epoch().count();


int32_t main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL);

     int n;cin>>n;
     int x;
     cin>>x;

     vector<pair<int,int>>a(n);
     for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;

     }

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){

        int l=i+1;int h=n-1;
        int req=x-a[i].first;   

    while(l<h){   
         
         if(a[l].first+a[h].first==req){
            cout<<a[i].second<<" "<<a[l].second<<" "<<a[h].second<<"\n";
            return 0;
         }
         else if(a[l].first+a[h].first<req){
            l++;
         }else{
            h--;
         }
    }
       
    }
     cout<<"IMPOSSIBLE"<<"\n";

     return 0;

}