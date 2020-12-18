#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
    string a = "2020";
    int n = s.length();
    int idx = s.find(a);
    if(s[0] != '2'){
        if(s[n-1]!='0'){
            return false;
        }else if(idx == n-4){
            return true;
        }
    }else{
        if(s[n-1] != '0'){
            if(idx == 0){
                return true;
            }
        }else{
            if(idx == 0){
                return true;
            }
            if(idx == n-4){
                return true;
            }
            if(s[1] == '0' && s[2]=='2'){
                return true;
            }
            if(s[1] == '0' && s[n-2] == '2'){
                return true;
            }
            if(s[n-3] == '0' && s[n-2] == '2'){
                return true;
            }else{
                return false;
            }
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

