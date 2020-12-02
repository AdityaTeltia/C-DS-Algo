#include<iostream>
using namespace std;

int length(string s,int k){
    if(s.size()<k){
        return -1;
    }

}


int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;

        cout<<length(s,k);


    }

    return 0;
}
