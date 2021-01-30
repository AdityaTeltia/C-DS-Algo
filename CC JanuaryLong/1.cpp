#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int count = 0;
        cin>>n>>m;
        int a[n];
        int sum1 = 0;

        int b[m];
        int sum2 =0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1 +=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sum2 += b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        if(sum1>sum2){
            cout<<0<<endl;
        }else{
            int i = 0;
            int j = m-1;
            int mn = min(n,m);
            for(int k=0;k<mn;k++){
                count++;
                sum1 = sum1 - a[i] + b[j];
                sum2 = sum2 - b[j] + a[i];
                i++;
                j--;
                if(sum1>sum2){
                    break;
                }
            }
        }
        if(sum1>sum2){
            cout<<count<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}
