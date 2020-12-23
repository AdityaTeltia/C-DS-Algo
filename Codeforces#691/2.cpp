#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n%2){
        return (n+2)*(n+2)/2;
    }else{
        return pow((n/2 +1),2)
    }
}

int main(){
    int n;
    cin>>n;

    cout<<solve(n);
}
