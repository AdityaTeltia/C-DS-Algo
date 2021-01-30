#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1];
        int b[m+1];

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        sort(a+1,a+1+n);

        for(int i=1;i<=m;i++){
            cin>>b[i];
        }
        int cost = 0;
        int curr = 1;

        for(int i=n;i>=1;i--){
            int temp = INT_MAX;
            if(curr<=a[i]){
                temp=b[curr];
            }
            if(temp<b[a[i]]){
                curr++;
                cost += temp;
            }else{
                cost += b[a[i]];
            }
        }
        cout<<cost<<endl;

    }
}
