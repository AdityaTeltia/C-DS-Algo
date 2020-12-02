#include<bits/stdc++.h>
#include <cstdlib>
#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,r,c;
        cin>>n>>m>>r>>c;

        int ans1 = max(abs(r-1)+abs(c-1),abs(r-n)+abs(c-1));
        int ans2 = max(abs(r-1)+abs(c-m),abs(r-n)+abs(c-m));
        int ans = max(ans1,ans2);
        cout<<ans<<endl;

    }
}
