#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a,int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int count=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(isSorted(a,n)){
            cout<<count<<endl;
        }else{
            for(int i=0;i<n;i++){
                if(a[i]>x){
                    swap(a[i],x);
                    count++;
                }
            }

            if(isSorted(a,n)){
                cout<<count<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
}
