#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    aditya
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int k, arr[n];
        cin >> k;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int m;
        m = k;
        while(m%2==0)m=m/2;
        bool flag = true;
        for(int i=0;i<n;i++){
            if(arr[i]%m!=0){
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
    }
}
