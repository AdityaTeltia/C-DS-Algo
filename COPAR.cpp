#include<iostream>
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
        int sum = 0;
        int backsum = 0;

        for(int i=0;i<n;i=i+2){
            for(int j=n-1;j>i+1;j=j-2){
                sum += a[i]+a[i+1];
                backsum +=a[j]+a[j-1];
            }
            int m = min(sum,backsum) ;
            for(int k=2;k<m;k++){
                if(sum%k==0 && backsum%k==0){}
                else{
                    if(i!=0){
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
    }


    return 0;
}
