#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7
int32_t main(){
    int n;
    cin>>n;
    int ans = 1;

    for(int i=0;i<n;i++){
        ans = fmod((ans*2),mod);
    }
    cout<<ans;
}
