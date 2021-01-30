#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>

ll dp[4020][4020];
ll pref[4020];

ll krlunkch(ll idx,ll taken,ll n,ll k,vll &arr){
    if(taken>=k and (pref[idx]-taken>=k)) return 0;
    else if(idx>=n)  return 1e10;
    else if(dp[idx][taken]!=-1) return dp[idx][taken];

    ///so now two choice again
    ll ans1 = krlunkch(idx+1,min(taken+arr[idx],pref[idx]-taken),n,k,arr);
    ll ans2 = krlunkch(idx+1,min(pref[idx]-taken+arr[idx],taken),n,k,arr);
    
    return dp[idx][taken] = 1+min(ans1,ans2);
}

ll dpdedo(vll &arr,ll n,ll k){
    for(ll i=0;i<n/2;i++) swap(arr[i],arr[n-i-1]);
    for(ll i=0;i<=n+10;i++){
        pref[i]=0;
        for(ll j=0;j<=k+10;j++) dp[i][j]=-1;
    }
    for(ll i=1;i<=n;i++)pref[i]=pref[i-1]+arr[i-1];
    ll ans = krlunkch(0,0,n,k,arr);
    return ans>1e9?-1:ans;
}

void aditya(){
    ll n,k; cin>>n>>k;
    vll arr(n,0);
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(n==1){
        cout<<"-1"<<endl;
        return;
    }
    cout<<dpdedo(arr,n,k)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        aditya();
       
    }
}
