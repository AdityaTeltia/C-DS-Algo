#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vll vector<long long>
#define vs vector<string>
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void result(bool ans){
    if(ans){
        cout<<"Yes"<<"\n";
    } else {
        cout<<"No"<<"\n";
    }
}
unordered_set<int>st;
int solve(){
    int a=2;
    while(a<=1e14){
        st.insert(a);
        a*=2;
    }
    return -1;
}

int32_t main() {
    aditya
    int t;
    cin>>t;
    solve();
    while(t--){
        int n;
        cin>>n;
        if(st.find(n)==st.end()){
            result(true);
        } else {
            result(false);
        }
    }

    return 0;
}
