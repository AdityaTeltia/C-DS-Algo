#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans.push_back(x);
        }
        int curr  = 0;
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            int j = i;
            while(j<n){
                curr +=ans[i];
                j+=ans[i];
                mx = max(mx,curr);
            }
            curr = 0;
        }
        cout<<mx<<endl;
    }

}
