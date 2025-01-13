#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;;;
    cin >> n ;
    queue<int>q;
    int count=1;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(q.size()>1){
        if(count&1){
            q.push(q.front());
            //q.pop();
        }
        else{
            cout<<q.front()<<" ";

        }
        q.pop();
        count++;
    }
    cout<<q.front()<<"\n";
     return 0;
}
