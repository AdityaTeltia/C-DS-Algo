#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin>>n;
    int a[n];
    int neg = 0;
    vector<int>v;
    int z = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            z++;
        }
        if(a[i]<0){
            neg++;
            v.push_back(a[i]);
        }
    }
    int temp = 1;
    if(neg%2==0){
        for(int i=0;i<n;i++){
            if(n>1 && n-z>0)temp = 0;
            if(a[i]==0 && temp){
                cout<<a[i]<<" ";
                temp = 0;
            }
            if(a[i]!=0)cout<<a[i]<<" ";
        }
    }else{
        int mx = INT_MIN;
        for(int i=0;i<v.size();i++){
            mx =max(v[i],mx);
        }
        bool flag = false;
        vector<int>ans;
        if(n==1)cout<<v[0]<<endl;
        else{
            for(int i=0;i<n;i++){
                if(a[i]==mx && !flag){
                    flag = !flag;
                }else{
                    ans.push_back(a[i]);
                }
            }
            for(int i=0;i<ans.size();i++){
                if(ans.size()>1 && ans.size()-z>0)temp = 0;
                if(ans[i]==0 && temp){
                    cout<<ans[i]<<" ";
                    temp = 0;
                }
                if(ans[i]!=0)cout<<ans[i]<<" ";
            }
        }
    }


}
