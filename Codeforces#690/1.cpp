#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0;
        int j=n-1;
        int b[n];
        int flag = 0;
        while(i<=j && flag<n){
            if(flag%2==0){
                b[flag] = a[i];
                i++;
                flag++;
            }else{
                b[flag] = a[j];
                j--;
                flag++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

}
