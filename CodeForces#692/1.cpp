#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        for(int i =s.length()-1;i>=0;i--){
            if(s[i]==')'){
                count ++;
            }else{
                break;
            }
        }
        int rem = s.length() - count;

        if(rem<count){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
