#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>lines(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j=0;j<x;j++){
                int ant;
                cin>>ant;
                lines[i].push_back(ant);
                mp[abs(ant)]++;

            }
        }
        int ans = 0;
        for(auto j:mp){
            ans += (j.second>1);
        }
        for(auto line:lines){
            vector<int>neg,pos;
            for(int ant:line){
                if(ant<0){
                    neg.push_back(ant);
                }else{
                    pos.push_back(ant);
                }
            }
            reverse(pos.begin(),pos.end());
            while(true){
                int closest;
                if(neg.empty() && pos.empty())break;
                else if(neg.empty())closest = pos.back();
                else if(pos.empty())closest = neg.back();
                else closest = (abs(neg.back())<pos.back()) ? neg.back():pos.back();
                if(closest<0){
                    if(mp[abs(closest)]>1){
                        ans += sizeof(neg)-1;
                    }else{
                        ans += sizeof(pos);
                    }
                }else{
                    if(mp[abs(closest)]>1){
                        ans += sizeof (pos)-1;
                    }else{
                        ans += sizeof(neg);
                    }
                }
                if(closest<0){
                    neg.pop_back();
                }else{
                    pos.pop_back();
                }
            }
        }
        cout<<ans<<endl;

    }
}
