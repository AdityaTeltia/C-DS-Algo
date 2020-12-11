#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char a[n];

        for(int i=0;i<k;i++){
            a[i] = 'a';
        }
        int flag = 0;
        for(int i=k;i<n;i++){
            if(flag == 0){
                a[i] ='c';
                flag=1;
            }else if(flag==1){
                a[i] = 'b';
                flag = 2;
            }else{
                a[i] = 'a';
                flag = 0;
            }
        }

        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;

    }

}
