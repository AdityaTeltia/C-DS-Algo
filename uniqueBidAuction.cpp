#include<bits/stdc++.h>
using namespace std;

bool isUnique(int *a,int i,int n){
    int x = a[i];
    int count = 0;
    for(int j=1;j<=n;j++){
        if(a[j]==x){
            count++;
        }
    }
    if(count == 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>unique;
        for(int i=1;i<=n;i++){
            if(isUnique(a,i,n)){
                unique.push_back(i);
            }
        }
        int mini = INT_MAX;
        for(int i=0;i<unique.size();i++){
            mini = min(mini,a[unique[i]]);
        }
        if(unique.size()==0){
            cout<<-1<<endl;
        }else{
            for(int i=1;i<=n;i++){
                if(a[i]==mini){
                    cout<<i<<endl;
                }
            }
        }
    }
}
