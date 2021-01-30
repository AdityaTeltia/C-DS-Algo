#include<iostream>
using namespace std;

void solve(){
    int x,y,n;
    cin>>x>>y>>n;
    int a = 1;
    while(x%2==0){
        x /=2;
        a *=2;
    }
    while(y%2==0){
        y /=2;
        a *=2;
    }
    cout<< a>=n ? "YES" : "NO" << endl;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
