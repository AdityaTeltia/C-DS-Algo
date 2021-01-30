#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    int nst = 2*n-1;
    int nsp = 0;

    for(int row=1;row<=2*n-1;row++){
        for(int csp = 0;csp<nsp;csp++){
            cout<<" "<<"\t";
        }
        for(int cst = 0;cst<nst;cst++){
            cout<<"*"<<"\t";
        }
        cout<<endl;
        if(row<n){
            nsp++;
            nst -=2;
        }else{
            nsp--;
            nst +=2;
        }
    }
}
