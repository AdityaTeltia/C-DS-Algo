#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
    string a = "2020";
    int n = s.length();
    int idx = s.find(a);
    if(idx == 0 || idx == n-4){
        return true;
    }else if(idx == -1){
        if(s[0] == '2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0'){
            return true;
        }else if(s[0]=='2' && s[1] == '0' && s[n-1]=='0' && s[n-2] == '2'){
            return true;
        }else if(s[0]=='2' && s[1] == '0' && s[2] == '2' && s[n-1]=='0'){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;

        if(solve(str)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

