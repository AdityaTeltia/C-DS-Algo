#include<bits/stdc++.h>
using namespace std;


int main(){
        int n,m,k;
        int eligible = 0;
        cin>>n>>m>>k;
        for(int i=0;i<n;i++){
            int t[k],q;
            for(int i = 1;i<=k;i++){
                cin>>t[i];
            }
            cin>>q;
            int totalTime = 0;
            for(int i=1;i<=k;i++){
                totalTime += t[i];
            }
            if(totalTime>=m && q<10){
                eligible++;
            }
        }
        cout<<eligible<<endl;
}
