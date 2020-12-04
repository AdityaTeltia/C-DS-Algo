#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll int a,b;
        cin>>a>>b;

        ll ans = 1;

        ans = (a*b)/2;

        if(ans == 0){
            cout<<1<<endl;
        }else{
            cout<<ans<<endl;
        }

    }

}
