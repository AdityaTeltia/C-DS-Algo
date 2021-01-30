#include<bits/stdc++.h>
using namespace std;

int solve (string bit){
    int  num = 8;
    int ans = 0;
    for(int i=0;i<bit.length();i++){
        int temp = bit[i] -48;
        ans += temp*num;
        num /=2;
    }
    return ans;
}

int main(){
    char *a[16] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p"};
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int j =0;
        string ans = "";
        while(j<n){
            string temp = s.substr(j,4);
            ans += a[solve(temp)];
            j+=4;
        }
        cout<<ans<<endl;
    }
}
