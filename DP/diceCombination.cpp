#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod = 1e9+7;
int diceDP(int n){
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        int res = 0;
        if(i>=1)res = (res%mod+dp[i-1]%mod)%mod;
        if(i>=2)res = (res%mod+dp[i-2]%mod)%mod;
        if(i>=3)res = (res%mod+dp[i-3]%mod)%mod;
        if(i>=4)res = (res%mod+dp[i-4]%mod)%mod;
        if(i>=5)res = (res%mod+dp[i-5]%mod)%mod;
        if(i>=6)res = (res%mod+dp[i-6]%mod)%mod;
        if(i<=6)res = (res%mod+1%mod)%mod;
        dp[i] = res;
    }
    return dp[n];
}

int dice(int n){
    if(n==0){
        return 0;
    }
    int x = INT_MAX ,y = INT_MAX , z =INT_MAX , m =INT_MAX, k = INT_MAX, l = INT_MAX;
    if(n>=1)x=dice(n-1);
    if(n>=2)y=dice(n-2);
    if(n>=3)z=dice(n-3);
    if(n>=4)m=dice(n-4);
    if(n>=5)k=dice(n-5);
    if(n>=6)l=dice(n-6);
    int ans = 0;
    if(x != INT_MAX)ans += x;
    if(y != INT_MAX)ans += y;
    if(z != INT_MAX)ans += z;
    if(m != INT_MAX)ans += m;
    if(k != INT_MAX)ans += k;
    if(l != INT_MAX)ans += l;
    return ans+1;
}


int32_t main(){
    int n;
    cin>>n;
    int count = 0;
    cout<<dice(n)<<endl;
}
