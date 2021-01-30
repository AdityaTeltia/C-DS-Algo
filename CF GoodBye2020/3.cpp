#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>



int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n;
        vector<long long>a(n,0);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll sol=1;
    unordered_set<int> mp;
    mp.insert(a[0]);
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1] || mp.find(a[i])!=mp.end()){
            a[i]++;
        }
        if(mp.find(a[i])==mp.end()){
            sol++;
            mp.insert(a[i]);
        }
    }
        cout<<sol<<endl;
    }

    return 0;
}
