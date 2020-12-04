#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int b[n];
        int l[m];

        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            cin>>l[i];
        }

        int i=0;
        int j=0;
        int count = 0;
        while(i<n && j<m){
            if(b[i]==l[j]){
                count++;
                i++;
                j++;
            }else if(b[i]<l[j]){
                i++;
            }else{
                j++;
            }
        }
        cout<<count<<endl;
    }
}
