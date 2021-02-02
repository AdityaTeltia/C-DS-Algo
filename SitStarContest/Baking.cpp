#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mx = max(a,max(b,c));
    int mn = min(a,min(b,c));

    if(a==mx||a==mn){
        cout<<mx-mn<<endl;
    }else{
        int diff1 = abs(a-b);
        int diff2 = abs(a-c);
        int temp1 = min(diff1,diff2);
        int temp2 = max(diff1,diff2);
        int ans = 2*temp1+temp2;
        cout<<ans<<endl;
    }

}
