#include<bits.stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n,q;
        int a[n];
        int s[q];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>s[i];
        }

        sort(a,a+n);
        int mx = 0;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            mx = max(mx,a[i]);
            mn = min(mn,a[i]);
        }
        int mid = (mx+mn)/2;




    }

}
