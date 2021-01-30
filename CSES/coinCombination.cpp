#include<iostream>
using namespace std;

int solve(int n,int x,int*a,int ans){
    if(x==0){
        return 1;
    }

    if(x<0){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(a[i]<=x){
            int data = solve(n,x-a[i],a,ans);
            ans = data;
        }else{
            continue;
        }
    }
    return ans;
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(n,x,a,count);
}
