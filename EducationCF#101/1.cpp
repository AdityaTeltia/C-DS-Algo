#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
    int j = s.length()-1;
    if(s[0]==')'|| s[j]=='('){
        return false;
    }else{
        int a=0;
        int b =0;
        int c= 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                a++;
            }else if(s[i]==')'){
                b++;
            }else{
                c++;
            }
        }
        int diff = abs (a-b);
        int d = diff +c;
        if(d%2==0){
            return true;
        }else{
            return false;
        }
    }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        if(solve(str)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
}
