#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

int32_t(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        vector<int>md;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.pb(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.pb(x);
        }
        for(int i=0;i<n;i++){
            int x = a[i]%b[i];
            md.pb(x);
        }
        int c=0;
        int mx = INT_MIN;
        map<int,int>mp;
        for(auto&i:md)mp[i]++;
        for(auto&i:mp){
            if(i.second>c){
                c = i.first;
                mx = c;
            }
        }


    }
}
