#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<string> solve(int n){
    if(n==1){
        vector<string>res;
        res.push_back("0");
        res.push_back("1");
        return res;
    }
    vector<string> small = solve(n-1);
    vector<string> ans;
    for(int i=0;i<small.size();i++){
        string temp = small[i];
        ans.push_back("0"+temp);
    }
    for(int i = small.size()-1;i>=0;i--){
        string temp = small[i];
        ans.push_back("1"+temp);
    }
    return ans;
}

int32_t main(){
    int n;
    cin>>n;

    vector<string>ans = solve(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}
