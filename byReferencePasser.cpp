#include<iostream>
using namespace std;

void f(int &i){
    i++;

}


int main(){
    int a=10;
    f(a);

    cout<<a;

}
