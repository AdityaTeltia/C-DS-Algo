#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(i+1);
        }
        int sumUptok = 0;
        for(int i=0;i<k;i++){
            sumUptok += ans[i];
        }


        if(k<n){
            ans.push_back(-1*sumUptok);
            for(int i=k+1;i<n;i++){
                ans.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
