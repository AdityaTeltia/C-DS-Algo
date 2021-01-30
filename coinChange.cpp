#include<bits/stdc++.h>
using namespace std;

void coinChange(int n,int &count){
    if(n==0){
        count++;
    }
    if(n<0)return;
    if(n-2>=0)coinChange(n-2,count);
    if(n-3>=0)coinChange(n-3,count);
    if(n-5>=0)coinChange(n-5,count);
    if(n-7>=0)coinChange(n-7,count);
}

int coinChange(int n){
    int count = 0;
    coinChange(n,count);
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<coinChange(n)<<endl;
}
