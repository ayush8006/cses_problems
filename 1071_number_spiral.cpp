#include<bits/stdc++.h>
using namespace std;

void solve(){

    long row,col;
    cin>>row>>col;

    long maxi=max(row,col);

    long diagonal=(maxi*maxi)-maxi+1;
    

    if(row<maxi){
        if(col&1){
            diagonal+=(maxi-row);
        }
        else{
            diagonal-=(maxi-row);
        }
    }else{
        if(row&1){
            diagonal-=(maxi-col);
        }else{
            diagonal+=(maxi-col);
        }
    }
    cout<<diagonal<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}