#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya     ios_base::sync_with_stdio(false);cin.tie(NULL);


int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;

        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        if(a[0]+a[1]<=d){
            cout<<"YES"<<endl;
        }else{
            bool flag = true;
            for(int i=0;i<n;i++){
                if(a[i]<=d){
                    continue;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}
