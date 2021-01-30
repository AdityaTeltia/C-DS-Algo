#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    vector<string>v;

    do{
        v.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    cout<<v.size()<<endl;
    for(string i:v){
        cout<<i<<endl;
    }

}
