#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        string ans;
        int count = 0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='t'){
                count++;
            }else{
                ans += a[i];
            }
        }
        for(int i=0;i<count;i++){
            ans+='t';
        }
        cout<<ans<<endl;
    }

}
