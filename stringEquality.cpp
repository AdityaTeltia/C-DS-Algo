#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        string b;
        cin>>b;
        int i=0;
        while(i<n){
            if(a[i] = b[i]){
                i++;
                continue;
            }else if(a[i] = b[i+1] && a[i+1] == b[i]){
                swap(a[i],a[i+1]);
                i++;
            }else{
                int count =0;
                for(int j =i;j<k;j++){
                    if(a[j] = a[j+1]){
                        count++;
                    }
                }
                if(count == k){
                    for(int j=i;j<k;j++){
                        a[j] = b[i];
                    }
                }
            }
        }
        if(a!=b){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
