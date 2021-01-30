#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        vector<pair<pair<int,int>,int>>v;
        for(int i=0;i<n;i++){
            int w,h;
            cin>>h>>w;
            v.push_back({{w,-h},i});
            v.push_back({{h,-w},i});
        }
        sort(v.begin(),v.end());// sort with increasing width and if width are same then sorted in decreasing height
        int mn = INT_MAX;
        int element = -1;

        vector<int>ans(n,-2);

        for(auto i:v){
            int w = i.first.first;
            int h = -i.first.second;
            int id = i.second;

            if(h>mn){
                ans[id] = element;
            }else if(h<mn){
                mn = h;
                element = id;
            }
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]+1<<" ";
        }
        cout<<endl;





    }
}
