#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int x,y,v;
            cin>>x>>y>>v;
            a[x][y] = v;

        }
    }
}
