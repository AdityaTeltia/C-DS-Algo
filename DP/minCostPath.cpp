#include<bits/stdc++.h>
using namespace std;

int minCostPath(int**a,int m,int n,int i,int j){
    if(i==m-1 && j==n-1)return a[i][j];

    if(i>=m || j>=n)return INT_MAX;

    int x = minCostPath(a,m,n,i,j+1);
    int y = minCostPath(a,m,n,i+1,j+1);
    int z = minCostPath(a,m,n,i+1,j);

    int ans = min(x,min(y,z)) + a[i][j];
    return ans;
}



int minCostPath(int**a,int m,int n){
    return minCostPath(a,m,n,0,0);
}

int main(){
    int m,n;
    cin>>m>>n;
    int**a = new int*[m];
    for(int i=0;i<m;i++){
        a[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<minCostPath(a,m,n)<<endl;
}
