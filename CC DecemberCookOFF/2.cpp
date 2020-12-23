
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int i = 2*k;
        if(abs(x-y)%i == 0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
