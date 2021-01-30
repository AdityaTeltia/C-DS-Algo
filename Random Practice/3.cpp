#include<bits/stdc++.h>

using namespace std;
#define f(i,a) for(int i=0;i<a;i++)


int main(){

    int n;
    cin>>n;
    int a[n];
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag = 1;
    for(int i=0;i<n;i++){
        if(a[i]>i+1){
            flag = 0;
            break;
        }
    }
    map<int,int>mp;
    if(!flag){
        cout<<-1<<endl;
    }else{
        f(i,n){
            mp[a[i]] = i;
        }
        vector<int>arr(n,-1);
        for(auto&i:mp){
            if(i.second<n-1){
                arr[i.second+1] = i.first;
            }
        }
//        int p = 0;
//        for(int i=0;i<n;i++){
//            if(arr[i] != -1){
//                continue;
//            }
//            while(mp.count(p)>0)p++;
//            arr[i] = p;
//            p++;
//        }
        f(i,n){
            cout<<arr[i]<<" ";
        }
    }

}
