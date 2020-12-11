#include<bits/stdc++.h>
using namespace std;

int power(int p){
    int num = 1;
    for(int i = 1;i<=p;i++){
        num *= 2;
    }
    return num;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int p;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int index = 0;
        while(x-- && index<n-1){
                p = log2(a[index]);
            a[index] = a[index]^power(p);
            for(int j=index+1;j<n;j++){
                if(a[j]^power(p)<a[j]){
                    a[j] = a[j]^power(p);
                }
            }
            if(a[index]==0){
                index++;
            }

        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }


    }

}
