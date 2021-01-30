#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c = 1;
    int mx = INT_MIN;
    for(int i=1;i<=s.length();i++){
        mx = max(mx,c);
        if(s[i-1] != s[i]){
            c=0;
            c++;
        }else{
            c++;
        }
    }
    cout<<mx;
}
