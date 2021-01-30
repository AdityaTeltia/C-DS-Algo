#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        if(2*a<b){
            cout<<"NO"<<endl;
        }else if(2*a==b){
            cout<<"YES"<<endl;
        }else{
            a%=3;
            b%=3;
            if(a>b)swap(a,b);
            if(a==0 && b==0 || a==1&&b==2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
}
