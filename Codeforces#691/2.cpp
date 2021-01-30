#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int n;
    cin>>n;

    int dots = 0;
    int times =0;
    int ans =0;
    if(n%2==1){
        dots = 1;
        for(int i=1;i<=n;i+=2){
            dots++;
            times++;
        }
        ans = 2*dots*times;
    }else{
        dots = 1;
        times = 1;
        for(int i=2;i<=n;i+=2){
            dots++;
            times++;
        }
        ans = dots*times;
    }
    cout<<ans<<endl;
}
