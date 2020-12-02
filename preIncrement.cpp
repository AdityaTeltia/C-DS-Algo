#include<iostream>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;

    while(t--){
        ll p;
        int q;
        cin>>p>>q;

        for(ll i=p;i>1;i--){
            if(p%i ==0 && i%q !=0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
