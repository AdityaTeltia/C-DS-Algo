#include<bits/stdc++.h>
using namespace std;
#define ll long long

//Solved By AdityaTeltia
int main(){
    int t;
    cin>>t;
    while(t--){
        ll int a,b,c;
        cin>>a>>b>>c;

        ll int sum = a+b+c;

        bool f=false;
        if(sum%9==0) f=true;

        ll m = sum/9;

        if(f && a>=m && b>=m && c>=m) f=true;
        else f=false;

        if(f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }

}
