#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int mx = max(x,max(y,z));
        if(mx==x){
            if(y+z==x)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else if(mx==y){
            if(x+z==y)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(y+x==z)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}
