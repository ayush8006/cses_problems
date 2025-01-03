#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL);


     int n,k;
     cin>>n>>k;

     vector<int>a(n);

     for(int i=0;i<n;i++){
        cin>>a[i];

     }

     multiset<int>lo,hi;

    auto balance=[&](){

        if(lo.size()>hi.size()+1)
        {
            hi.insert(*lo.rbegin());
            lo.erase(lo.find(*lo.rbegin()));


        }
        else if(lo.size()<hi.size()){

            
            lo.insert(*hi.begin());
            hi.erase(hi.find(*hi.begin()));


        }
   };

     for(int i=0;i<n;i++){

       if(lo.empty()||*lo.rbegin()>=a[i]) lo.insert(a[i]);
       else hi.insert(a[i]);
        balance();

        if(i>=k){
            if(a[i-k]<=*lo.rbegin()){
                lo.erase(lo.find(a[i-k]));
            }
            else{
                hi.erase(hi.find(a[i-k]));
            }
             balance();
        }
        if(i>=k-1){
            cout<<*lo.rbegin()<<" ";

        }


     }cout<<endl;


    
}