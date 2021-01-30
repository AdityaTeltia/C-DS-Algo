#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int32_t main(){
	ll t;
	cin>>t;
	while(t--){
    int n;
    ll x;
    cin>>n>>x;
    ll a[n];
    ll sum =0;
    ll sum2 = 0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        ll f=0;
        if(a[i]%x!=0){
            f=(a[i]/x)+1;
        }else{
            f=(a[i]/x);
        }
        sum+=f;
        sum2+=a[i];
    }
    ll ans = sum2/x;
    if(sum2%x!=0)ans++;
    cout<<ans<<" "<<sum<<endl;
	}
	return 0;
}
