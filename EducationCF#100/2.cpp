#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        ll int a[n];
        ll int s = 0;
        ll int e = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2 ==0){
                s+=a[i];
            }else{
                e+= a[i];
            }
        }
        ll int b[n];
        if(s>e){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    b[i] = a[i];
                }else{
                    b[i] = 1;
                }
            }
        }else{
            for(int i=0;i<n;i++){
                if(i%2 != 0){
                    b[i] = a[i];
                }else{
                    b[i] = 1;
                }
            }
        }

        for(int i =0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

}
