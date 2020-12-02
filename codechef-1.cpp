#include<iostream>
#include<cstring>
using namespace std;


int main(){

    int testcase;
    cin>>testcase;

    for(int i=0;i<testcase;i++){
        int n;
        cin>>n;

        char s[n];


        for(int j=0;j<n;j++){
            cin>>s[i];
        }

        char subs[1000];

        for(int j=0;j<n;j++){
            for(int k=0;k<=j;k++){
                subs[k] == s[k];
            }
        }

        char subsubs[1000];
        for(int m = 0;m < n;m++){
            for(int u=0;u<=m;u++){
                subsubs[u] == subs[u];
            }
        }


        for(int p=0;p<n;p++){
            if(subsubs[p]+subs[p]==s[p]){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }

    }
    return 0;
}
