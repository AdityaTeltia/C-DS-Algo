#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        int neg = 0;
        int pos = 0;
        for(int i=0;i<x;i++){
            if(a[i]<0){
                neg++;
            }else{
                pos++;
            }
        }
        if(neg!=0 && pos != 0){
            cout<<<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}
