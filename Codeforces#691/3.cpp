#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,m;
    cin>>n>>m;
    int a[n+3];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int ans =0;
    for(int i=2;i<=n;i++){
        ans = __gcd(ans,a[i]-a[1]);
    }
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;

        int val = __gcd(a[1]+x,ans);
        cout<<val<<" ";
    }
    cout<<endl;
}

