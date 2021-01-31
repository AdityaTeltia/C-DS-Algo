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
        string s;
        cin>>s;
        int z =0;
        int o=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')z++;
            else o++;
        }
        int curr = 0;
        int mxZTogether =0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                curr++;
            }else{
                curr=0;
            }
            mxZTogether = max(curr,mx);
        }
        curr = 0;
        int mxOTogether =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                curr++;
            }else{
                curr=0;
            }
            mxOTogether = max(curr,mx);
        }
        if(z<o){

        }
    }

}
