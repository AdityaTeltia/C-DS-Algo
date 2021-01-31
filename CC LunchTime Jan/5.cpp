#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int temp = sqrt(x);
        int temp2 = ceil(sqrt(x));
        if(x<=n){
            cout<<"Yes"<<endl;
        }else if(temp==temp2){
            if(x<=n)cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
