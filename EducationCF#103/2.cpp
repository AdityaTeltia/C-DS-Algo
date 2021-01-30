#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back




int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>p;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p.pb(x);
        }
        int ans = 0;
        int sum = p[0];
        for(int i=1;i<n;i++){
            int data = (100*p[i]+k-1)/k;
            ans = max(ans,max(0LL,data - sum));
            sum+=p[i];
        }
        cout<<ans<<endl;
    }
}

