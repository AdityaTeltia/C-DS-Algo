#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count =0;
        int e =0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)e++;
            else o++;
        }
        cout<<min(e,o)<<endl;
    }

}
