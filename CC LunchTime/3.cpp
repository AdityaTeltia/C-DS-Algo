#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<int,int>mp;
        int count = 0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto&i:mp){
            if(i.second>1){
                int res = i.second/2;
                count += res;
            }
        }
        if(count<=k){
            cout<<count<<endl;
        }else{
            cout<<k<<endl;
        }
    }
}
