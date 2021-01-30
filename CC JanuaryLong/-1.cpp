#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        int count  = 0;

        int a[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum +=a[i];
        }
        count = sum/k;
        if(count>d){
            cout<<d<<endl;
        }else{
            cout<<count<<endl;
        }
    }
}
