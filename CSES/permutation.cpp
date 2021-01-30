#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans;
    int i=1;
    int j =2;
    while(j<=n){
        ans.push_back(j);
        j+=2;
    }
    while(i<=n){
        ans.push_back(i);
        i+=2;
    }
    if(n<=3 && n!=1){
        cout<<"NO SOLUTION";
    }else if(n==1)cout<<1;
    else{
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }
    return 0;

}
