#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        int mx = INT_MIN;
        for(int i=0;i<=n;i++){
            cin>>a[i];
            mx = max(a[i],mx);
        }
        int totalDucks = n*k;
        int capacity = k;

        int i=0;
        while(i<n){
            int c1,m1,c2,m2;


            cout<<c1<<" "<<m1<<" "<<c2<<" "<<m2<<endl;
        }
    }
}
