
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
        int c = 0;
        int a = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
            }else{
                a++;
            }
        }

        if(a<=30){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

