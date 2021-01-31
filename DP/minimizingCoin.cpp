#include<bits/stdc++.h>
using namespace std;
#define int long long

int DP(int n,int k,int*a){
    int dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<)
    }
}


int solve(int n,int k,int *a){
    if(k==0)return 0;
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<=k){
            int x = solve(n,k-a[i],a);
            if(x!=INT_MAX&&x!=-1)ans = min(ans,x+1);
        }
    }
    return ans==INT_MAX?-1:ans;
}

int32_t main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(n,k,a);
}
