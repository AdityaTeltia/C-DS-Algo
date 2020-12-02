#include <bits/stdc++.h>

using namespace std;



int main(){

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        int k;

        cin>>n;
        cin>>k;

        int a[n];

        for(int j=0;j<n;j++){
            cin>>a[i];
        }

        int counts = 0;

        for(int j=0;j<n;j++){
            if(a[j]<=0){
                counts++;
            }
        }



        if(counts<k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }

    return 0;

}
