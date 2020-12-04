#include<iostream>
using namespace std;

int main(){
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;

    int day = 1;
    int vaccine = 0;
    while(vaccine < p){
        if(d1 <= day){
            vaccine += v1;
        }
        if(d2<=day){
            vaccine += v2;
        }
        day++;
    }
    cout<<day-1;
}
