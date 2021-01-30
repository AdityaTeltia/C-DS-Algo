#include <bits/stdc++.h>
using namespace std;


void solve(){
      string s;
      cin>>s;
      int ans=0;
      int n=s.size();
      for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
          if(s[i]!='*') ans++;
          s[i]='*';
        }
        if(i!=n-1 && s[i-1]==s[i+1]){
          if(s[i-1]!='*') ans++;
          s[i+1]='*';
        }
      }
      cout<<ans<<endl;

}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
          int sol=0;
          int m=s.size();
          for(int i=1;i<m;i++){
            if(s[i-1]==s[i]){
              if(s[i]!='@') sol++;
              s[i]='@';
            }
            if(i!=m-1 && s[i-1]==s[i+1]){
              if(s[i-1]!='@') sol++;
              s[i+1]='@';
            }
          }
          cout<<sol<<endl;
    }
    return 0;
}
