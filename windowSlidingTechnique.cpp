#include<iostream>

using namespace std;

int maxSum(int*a,int n,int k){
    if(n<k){
        return -1;
    }
    int max_sum = 0;
    for(int i=0;i<k;i++){
        max_sum += a[i];
    }

    int window_sum = max_sum;
    for(int i=k;i<n;i++){
        window_sum += a[i] - a[i-k];
        max_sum = max(window_sum,max_sum);
    }
    return max_sum;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<maxSum(a,n,k);

}
