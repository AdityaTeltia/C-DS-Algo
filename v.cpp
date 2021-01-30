#include<iostream>
using namespace std;

int otherFunc(int n,int* count){
    //Logic
}

int func(int n){
    int count = 0 ;
    otherFunc(n,count);
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<func(n)<<endl;
}
