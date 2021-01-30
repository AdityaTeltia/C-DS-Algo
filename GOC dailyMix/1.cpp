#include<bits/stdc++.h>
using namespace std;


int main(){
    long double n;
    cin>>n;
    long double ans = 0;
    long double i = 1.00;
    while(n>0){
        ans += i/n;
        n--;
    }
    cout<<ans<<endl;
}
