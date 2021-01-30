#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int numDP(int h){
    int dp[(int)pow(2,h-1)+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3;i<=h;i++){
        dp[i] = dp[i-1]*dp[i-1] + 2*dp[i-1]*dp[i-2];
    }
    return dp[h];
}

int num(int h){
    if(h<=1)return 1;
    int x = num(h-1);
    int y = num(h-2);
    int ans =  x*x + 2*x*y;
    return  ans;
}


int main(){
    int h;
    cin>>h;
    cout<<numDP(h)<<endl;
    cout<<num(h)<<endl;
}
