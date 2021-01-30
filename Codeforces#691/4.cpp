#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pair<int,int>temp = make_pair(a,b);
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(auto&i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
