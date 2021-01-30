#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){


}

int main() {
    ll int t;
    cin>>t;
    while(t--){
        ll int n,m;
        cin>>n;
        vector<ll int>rArr(n,-2);

        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            rArr[i] = num;
        }

        cin>>m;
        vector<ll int>bArr(m,-2);
        for(int i=0;i<m;i++){
            int num;
            cin>>num;
            bArr[i] = num;
        }

        vector<ll int>ans1(n,0);
        vector<ll int>ans2(m,0);
        ll int mx = INT_MIN;
        ll int solution = 0;
        ll int mx2 = INT_MIN;
        ans1[0] = rArr[0];
        mx = max(mx,ans1[0]);
        ans2[0] = bArr[0];
        mx2 = max(mx2,ans2[0]);
        for(int i=1;i<n;i++){
            ans1[i] = ans1[i-1] + rArr[i];
            mx = max(mx,ans1[i]);
        }
        for(int i=1;i<m;i++){
            ans2[i] = ans2[i-1] + bArr[i];
            mx2 = max(mx2,ans2[i]);
        }

        solution = max(solution,mx);
        solution = max(solution,mx2);

        solution = max(mx+mx2,solution);
        cout << solution << endl;
    }


}
