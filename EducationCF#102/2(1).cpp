#include<bits/stdc++.h>
using namespace std;
#define int long long
#define aditya ios_base::sync_with_stdio(false);cin.tie(NULL);


long long gcd(int a,int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int32_t main(){
    aditya
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n= a.length();
        int m = b.length();
        int x = lcm(n,m);
        string ans ="";
        for(int i=1;i<=x/n;i++){
            ans += a;
        }
        string ans2 = "";
        for(int i=1;i<=x/m;i++){
            ans2 += b;
        }
        if(ans == ans2){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}
