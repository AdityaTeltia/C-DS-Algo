#include<bits/stdc++.h>
using namespace std;

int minCountDP(int n){
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i=4;i<=n;i++){
        dp[i] = i;
        for(int x=1;x<=sqrt(i);x++){
            int temp = x*x;
            if(temp>i)break;
            dp[i] = min(dp[i],1+dp[i-temp]);
        }
    }

    return dp[n];
}

int getMinSquares(unsigned int n){

    if (sqrt(n) - floor(sqrt(n)) == 0)return 1;
    if (n <= 3)return n;

    int res = n;

    for (int x = 1; x <= n; x++) {
        int temp = x * x;
        if (temp > n)break;
        else res = min(res, 1 + getMinSquares(n - temp));
    }
    return res;
}



int main(){
    int n;
    cin>>n;
    cout<<"Minimum Possible Numbers Required Memoization :" <<minCountBetter(n)<<endl;
    cout<<"Minimum Possible Numbers Required DP :" <<minCountDP(n)<<endl;
    cout<<"Minimum Possible Numbers Required :" <<getMinSquares(n)<<endl;

}
