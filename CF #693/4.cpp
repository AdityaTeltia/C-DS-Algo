#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int>v;
    v.push_back(0);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int ans = 0;
    vector<int>vec(n+1,0);
    for(int i=n;i>0;i--){
        vec[i] = v[i];
        if(i+vec[i]<=n){
            vec[i] += vec[i+v[i]];
        }
    }

    for(int i=1;i<=n;i++){
        ans = max(ans,vec[i]);
    }

    cout << ans << endl;

}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t){
        t--;
      solve();
    }
}
