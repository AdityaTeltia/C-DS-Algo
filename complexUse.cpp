#include<iostream>
using namespace std;
#include "complexClass.cpp"

int main(){
    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;

    Complex c1(real1,imaginary1);
    Complex c2(real2,imaginary2);

    c1.print();
    c2.print();

    c1.add(c2);

    c1.print();
    c2.print();

    c1.multiply(c2);

    c1.print();
    c2.print();



}
