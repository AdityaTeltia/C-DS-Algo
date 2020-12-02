#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,k;
        cin>>n>>p>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x,y;
        cin>>x>>y;
        int noPlatform = 0;
        int platform =0;
        int numberOfY = 1;
        while(y*numberOfY<x){
            numberOfY++;
        }
        int j=1;
        int time = 0;
        int minTime = INT_MAX;
        for(;numberOfY>0;numberOfY--){
            for(int i=j;i<n;i+k){
                if(a[p+j]==0){
                    noPlatform++;
                }else{
                    platform++;
                }
            }
            time +=y;
            time += noPlatform*x;
            minTime = min(time,minTime);
            j++;
        }
        cout<<minTime<<endl;

    }
}
