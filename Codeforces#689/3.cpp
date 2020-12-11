#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x;
        double y;
        int index = 0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x != (i+1)){
                index =i+1;
            }
        }
        double rev = 1.0;
        double ans = 0.0;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            if(x>=index){
                ans += (rev*y);
                rev *= (1.0 -y);
            }
        }
        if(index==0){
            ans = 1.0;
        }
        cout<<ans<<endl;
    }


}
