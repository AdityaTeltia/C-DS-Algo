#include <bits/stdc++.h>
using namespace std;
#define ll long long


void helper(bool ans){
    if(ans){
        cout<<"Yes"<<"\n";
    } else {
        cout<<"No"<<"\n";
    }
}

bool solve(ll w,ll h ,ll k){
    ll sheet=1;
    while(w%2==0 || h%2==0){
        if(w%2==0 && h%2==0){
            if(w<h){
                h/=2;
            } else {
                w/=2;
            }
        } else if(w%2==0){
            w/=2;
        } else {
            h/=2;
        }
        sheet*=2;
        if(sheet>=k) return true;
    }
    return sheet>=k;
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll w,h,k;
        cin>>w>>h>>k;
        bool ans=solve(w,h,k);
        helper(ans);
    }

    return 0;
}
