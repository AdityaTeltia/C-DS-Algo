#include<bits/stdc++.h>
using namespace std;

int minStepsDP(int n){
    int dp[n+1];
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 3;
    for(int i=4;i<=n;i++){
        int x = dp[i-1]+1;
        int y = INT_MAX,z = INT_MAX;
        if(i%2==0)y = dp[i/2]+1;
        if(i%3==0)z = dp[i/3]+1;
        dp[i] = min(x,min(y,z));
    }
    return dp[n];
}


int minSteps(int n){
    if(n==1)return 0;
    int x = minSteps(n-1);
    int y = INT_MAX,z = INT_MAX;
    if(n%2==0){
        y = minSteps(n/2);
    }
    if(n%3==0){
        z = minSteps(n/3);
    }
    return min(x,min(y,z))+1;
}
int minSteps1(int n,int* arr){
    if(n==1)return 0;
    int x=0;
    if(arr[n-1]!=-1){
        x=arr[n-1];
    }else{
        x=minSteps1(n-1,arr);
    }
    int y = INT_MAX,z = INT_MAX;
    if(n%2==0){
        if(arr[n/2]!=-1){
            y=arr[n/2];
        }else{
            y=minSteps1(n/2,arr);
        }
    }
    if(n%3==0){
        if(arr[n/3]!=-1){
            y=arr[n/3];
        }else{
            y=minSteps1(n/3,arr);
        }
    }
    arr[n]=min(x,min(y,z))+1;
    return arr[n];
}
int minSteps1(int n){
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    return minSteps1(n,arr);
}
int minStepsBetterHelper(int n,int*arr){
    if(n==1){
        arr[n] = 0;
        return 0;
    }
    if(arr[n-1]==-1)arr[n-1] = minStepsBetterHelper(n-1,arr);
    int y = INT_MAX,z = INT_MAX;
    if(n%2==0){
        if(arr[n/2] ==-1)arr[n/2] = minStepsBetterHelper(n/2,arr);
        y = arr[n/2];
    }
    if(n%3==0){
        if(arr[n/3]==-1)arr[n/3] = minStepsBetterHelper(n/3,arr);
        z = arr[n/3];
    }
    arr[n] = 1 + min(arr[n-1],min(y,z));
    return arr[n];
}
int minStepsBetter(int n){
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    return minStepsBetterHelper(n,arr);
}

int main(){
    int n;
    cin>>n;

    cout<<minStepsDP(n)<<endl;
//    cout<<minSteps1(n)<<endl;
//    cout<<minStepsBetter(n)<<endl;
//    cout<<minSteps(n)<<endl;
}
