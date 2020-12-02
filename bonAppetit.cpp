#include<iostream>
using namespace std;


int main(){

    int n,k;
    cin>>n>>k;

    int bill[n];
    for(int i=0;i<n;i++){
        cin>>bill[i];
    }

    int b;
    cin>>b;

    int sum =0;
    int chargedBill = b;

    for(int i=0;i<n;i++){
        sum += bill[i];
    }

    int actualBill = (sum - bill[k])/2;
    if(actualBill == chargedBill){
        cout<<"Bon"<<" "<<"Appetit";
    }else{
        cout<<chargedBill-actualBill;
    }

    return 0;
}
