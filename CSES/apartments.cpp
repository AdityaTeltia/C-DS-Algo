#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    int count =0;
    int i=0;
    int j=0;
    while(i<n&&j<m){
        if(b[j]<=a[i]+k && b[j]>= a[i]-k){
            count++;
            i++;
            j++;
        }else if(b[j]<a[i]-k){
            j++;
        }else{
            i++;
        }
    }
    cout<<count<<endl;

}
