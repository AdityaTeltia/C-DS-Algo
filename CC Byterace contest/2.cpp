#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll int t;
    cin>>t;
    while(t--){
        ll int n,q;
        cin>>n>>q;
        vector<pair<int,int>>v;
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            v.push_back(make_pair(l,r));
        }
         vector<int>a(n+2,0);
         vector<int>b(n+2,0);
         vector<int>c(n+2,0);
         vector<int>d(n+2,0);

         for(int i=0;i<q;i++){
             int val1 = v[i].first;
             int val2 = v[i].second;
           b[val1] += 1;
           c[val2+1] -= (val2 - val1 + 2);
           d[val2+1]--;

         }

         int ans = 0;
         for(int i=1;i<=n+1;i++){
             ans += b[i];
             a[i] += ans ;
             if(i>1){
                 a[i] += a[i-1];
             }
             a[i] += c[i];
             if(d[i]!=0){
             ans += d[i];
             }
         }
         for(int i=1;i<=n;i++){
             cout << a[i] << " ";
         }
         cout << endl;
        }
}
