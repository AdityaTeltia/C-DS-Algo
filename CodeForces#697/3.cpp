#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        vector<int>boy;
        vector<int>girls;

        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            boy.push_back(x);
        }
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            girls.push_back(x);
        }

        vector<pair<int,int>>mk;
        for(int i=0;i<k;i++){
            pair<int,int>temp({boy[i],girls[i]});
            mk.push_back(temp);
        }
        set<pair<
    }
}
