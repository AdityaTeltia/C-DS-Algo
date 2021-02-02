#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3!=0)cout<<-1<<endl;
        else{
            int temp = n/3;
            cout<<temp-1<<" "<<temp<< " "<<temp+1<<endl;
        }
    }
}
