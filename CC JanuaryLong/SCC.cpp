#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353
#define aditya  ios_base::sync_with_stdio(false); cin.tie(NULL);

int result(int var1,int var2){
    if(var2==0)return 1;
    if(var2 == 1)return var1;
    if(var2%2 == 1)return (result(var1,var2-1)*var1)%mod;
    int temp = result(var1,var2/2);
    return (temp*temp)%mod;
}

int32_t main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==2){
        int var = result(c,2*b);
        var = result(var,mod-2);
        if(c==1){
            cout<<var<<endl;
        }else{
            int dp[b][2];
            memset(dp,0,sizeof dp);
            dp[0][0] = c;
            dp[0][1] = (2*c*(c-1))%mod;
            for(int i=1;i<b;i++){
                dp[i][0] += ((c-1)*(dp[i-1][0]+(c*result(c,2*(i-1)))%mod)%mod)%mod;
                dp[i][0] %= mod;
                dp[i][0] += dp[i-1][0];
                dp[i][0] %= mod;
                dp[i][0] +=(2LL *dp[i-1][1])%mod;
                dp[i][0] %= mod;
                dp[i][0] += ((c-2)*(dp[i-1][1]+(((c*(c-1))%mod)*result(c,2*(i-1)))%mod)%mod)%mod;
                dp[i][0] %= mod;
                dp[i][1] += ((c-1)*(dp[i-1][0]+(c*result(c,2*(i-1)))%mod)%mod)%mod;
                dp[i][1] %= mod;
                dp[i][1] += ((c-1)*(dp[i-1][0]+(c*result(c,2*(i-1)))%mod)%mod)%mod;
                dp[i][1] %= mod;
                dp[i][1] += ((((c-2)*(c-1))%mod)*(dp[i-1][0]+(2*c*result(c,2*(i-1)))%mod)%mod)%mod;
                dp[i][1] %= mod;
                dp[i][1] += dp[i-1][1];
                dp[i][1] %=mod;
                dp[i][1] += ((((c-2))%mod)*(dp[i-1][1]+(((c*(c-1))%mod)*(result(c,2*(i-1)))%mod)%mod)%mod);
                dp[i][1] %= mod;
                dp[i][1] += ((((c-2))%mod)*(dp[i-1][1]+(((c*(c-1))%mod)*(result(c,2*(i-1)))%mod)%mod)%mod);
                dp[i][1] %= mod;
                dp[i][1] += ((((c-2))%mod)*(dp[i-1][1]+((2*(c*(c-1))%mod)*(result(c,2*(i-1)))%mod)%mod)%mod);
                dp[i][1] %= mod;
                dp[i][1] += ((((c-1))%mod)*(dp[i-1][1]+((2*(c*(c-1))%mod)*(result(c,2*(i-1)))%mod)%mod)%mod);
                dp[i][1] %= mod;
                dp[i][1] += ((((c-2)*(max(c-3,0LL)))%mod)*(dp[i-1][1]+((2*(c*(c-1))%mod)*result(c,2*(i-1)))%mod)%mod)%mod;
                dp[i][1] %= mod;
            }
            int data = dp[b-1][0] + dp[b-1][1];
            data %= mod;
            data *= var;
            data %=mod;
            cout<<data<<endl;
        }
    }else{
        int dp[b+1];
        memset(dp,0,sizeof dp);
        dp[1] = c;
        for(int i=2;i<b+1;i++){
            dp[i] += dp[i-1];
            dp[i] %=mod;
            dp[i] += ((c-1)*(dp[i-1]+(result(c,i-1))))%mod;
            dp[i] %=mod;
        }
        int var = result(c,b);
        var = result(var,mod-2);
        cout<<(dp[b]*var)%mod;

    }
}
