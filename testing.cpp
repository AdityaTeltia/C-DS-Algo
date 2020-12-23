#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,1,2,2,2,3,3,4,0};
    int n = sizeof(a)/sizeof(int);

    unordered_map<int,int>mp;

    for(auto&i:a)mp[i]++;

    for(auto&i:mp){

        cout<<"mp[i.second] "<<mp[i.second]<<endl;
        cout<<"mp[i.first] "<<mp[i.first]<<endl;
        cout<<"i.second "<<i.second<<endl;
        cout<<"i.first "<<i.first<<endl;
        cout<<endl;
    }

}
