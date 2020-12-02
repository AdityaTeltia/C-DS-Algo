#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

bool isbalanced(string str){
    stack<char>s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            s.push(str[i]);
        }
        if(str[i]=='{'){
            s.push(str[i]);
        }
        if(str[i]=='['){
            s.push(str[i]);
        }
        if(str[i]==')'){
            if(s.top()=='('){
                s.pop();
            }else{
                return false;
            }
        }
        if(str[i]==']'){
            if(s.top()=='['){
                s.pop();
            }else{
                return false;
            }
        }
        if(str[i]=='}'){
            if(s.top()=='{'){
                s.pop();
            }else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){

    string s;
    cin>>s;

    cout<<isbalanced(s)<<endl;
}
