#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c = 0;
        int a= 0;
        if(s.length()%2 != 0){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<s.length();i++){
                if(s[i]=='1'){
                    c++;
                }else{
                    a++;
                }
            }
            if (c==0 || a==0){
                cout<<-1<<endl;
            }else{
                cout<<(abs(c-a))/2<<endl;
            }
        }
    }
}
