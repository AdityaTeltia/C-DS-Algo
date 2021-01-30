#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int a[n];
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
    int steps  = n+5;
    int count  = 0;
    int i=0;
    vector<pair<int,int>>v;

    while(i<=n-2 && steps-->0){
        int x,y;
        x =n-i;
        y =n-i-1;
        if(x==y)break;
        pair<int,int>temp(x,y);
        a[x] = ceil(a[x]/a[y]);
        count++;
        v.push_back(temp);
        i ++;
    }
    cout<<count<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}
