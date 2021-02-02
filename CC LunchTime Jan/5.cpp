#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        for(int i=1;i<=n;i++){
            if(x%i==0 && x/i <=n){
                cout<<"Yes"<<endl;
                goto end;
            }
        }
        cout<<"No"<<endl;
        end:
        continue;
    }
}
