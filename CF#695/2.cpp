#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f = 1;
        int count =0;
        for(int i=1;i<n-1;i++){
            if(a[i-1]>a[i]&&a[i-1]>a[i-2]&&a[i+1]>a[i]&&a[i+1]>a[i+2]&&i>=2&&i<n-2){
                a[i] = max(a[i-1],a[i+1]);
                f=0;
                break;
            }else if(a[i-1]<a[i]&&a[i-1]<a[i-2]&&a[i+1]<a[i]&&a[i+1]<a[i+2]&&i>=2&&i<n-2){
                a[i] = min(a[i-1],a[i+1]);
                f=0;
                break;
            }
        }
        if(f){
            for(int i=1;i<n-1;i++){
               if(a[i]<a[i+1]&&a[i]<a[i-1] || a[i]>a[i+1]&&a[i]>a[i-1]){
                    a[i] = max(a[i+1],a[i-1]);
                    break;
               }
            }
        }
        for(int i=1;i<n-1;i++){
            if(a[i]<a[i+1]&&a[i]<a[i-1]|| a[i]>a[i+1]&&a[i]>a[i-1]){
                count++;
            }
        }
        cout<<count<<endl;
    }

}
