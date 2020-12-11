#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,2,3,3,4,4,5,6,7,1,1,3,4,1,1,1,1,1,1};
    int n = 20;
    unordered_map<int,int>mp;
    int maxi = INT_MIN;

    for(int i=0;i<20;i++){
        if(mp.count(a[i])>0){
            mp[a[i]]++;
            if(mp[a[i]] > maxi){
                maxi = mp[a[i]];
            }
        }else{
            mp[a[i]] = 1;
        }
    }



    for(int i=0;i<mp.size();i++){
        if(mp[a[i]] == maxi){
            cout<<a[i]<<endl;
        }
    }

}
