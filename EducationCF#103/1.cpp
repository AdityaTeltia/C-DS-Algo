#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        int n,k;
       	cin>>n>>k;
        int ans = (n+k-1)/k;
        ans*=k;
        cout<<(ans+n-1)/n<<endl;

    }

    return 0;
}
