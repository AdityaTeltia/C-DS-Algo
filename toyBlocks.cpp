#include<iostream>
#include<climits>
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
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            maxi = max(maxi,a[i]);
            mini = min(mini,a[i]);
        }
        int put = 0;
        for(int i=0;i<n;i++){
            if()
        }
    }

}
