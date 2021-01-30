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
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx = 0;
        for(auto&i:mp)mx = max(mx,i.second);

        cout<<mx<<endl;
    }
}
