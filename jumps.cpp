#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        int jumpCount = 1;
        int y = 0;
        int moves = 0;
        while( y<x){
            y += jumpCount;
            moves++;
            if(y==x){
                break;
            }
            jumpCount++;
        }
        int diff = y-x;
        if(diff==1){
            moves++;
        }
        cout<<moves<<endl;
    }
}
