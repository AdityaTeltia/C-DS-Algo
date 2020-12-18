#include<bits/stdc++.h>
using namespace std;

int solve(int *a,int n,int sum){
        for(int i=n;i>=0;i--){
            if(sum%i==0){
                int equalSum = sum/i;
                int currSum = 0;
                for(int j=0;j<n;j++){
                    currSum += a[j];
                    if(currSum>equalSum){
                        break;
                    }else if(currSum == equalSum){
                        currSum = 0;
                        if(j == n-1){
                            return n-i;
                        }
                    }
                }
            }
        }
        return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        cout<<solve(a,n,sum)<<endl;

    }
}


