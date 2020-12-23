#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

        ll int n,m;
        cin>>n>>m;
        ll int a[n];
        ll int b[m];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);

        ll int ans =0;

        for(int i=0;i<n;i++){
            if(b[i]>=a[0]){
                break;
            }else{
                ans += n;
            }
        }
        cout<<ans;

}

