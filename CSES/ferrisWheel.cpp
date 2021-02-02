#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,x;
    cin>>n>>x;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count = 0;
    int sum =0;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(sum+a[i]<=x){
            sum+=a[i];
            flag = false;
        }else{
            sum = a[i];
            count++;
            flag = true;
        }
    }
    if(!flag)count++;
    cout<<count<<endl;
}
