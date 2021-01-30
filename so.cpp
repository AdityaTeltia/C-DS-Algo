#include<bits/stdc++.h>
using namespace std;

vector<string>solve(string s){
    vector<string>v;
    string ans;
    for(int i=0;i<s.length();i++){
        if(s[i]!= ','){
            ans += s[i];
        }else{
            v.push_back(ans);
            ans = "";
        }
    }
    v.push_back(ans);
    return v;
}


int main(){
    string str;
    cin>>str;
    vector<string>ans = solve(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
