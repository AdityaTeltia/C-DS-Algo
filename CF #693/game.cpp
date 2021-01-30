#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        bool s = true;
        int s1=0;
        int s2 =0;
        for(int i=n-1;i>=0;i--){
            if(s){
                if(a[i]%2==0){
                    s1 += a[i];
                }
            }else{
                if(a[i]%2 !=0){
                    s2 += a[i];
                }
            }
            s = !s;
        }
        if(s1>s2){
            cout<<"Alice"<<endl;
        }else if(s1==s2){
            cout<<"Tie"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
}
