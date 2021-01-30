#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                v.push_back(a[j]-a[i]);
            }
        }
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        cout<<mp.size()<<endl;
    }
}
