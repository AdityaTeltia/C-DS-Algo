#include<iostream>
using namespace std;
#include "Polynomial.cpp"


int main(){
    Polynomial p1;
    p1.setCoeff(2,0);
    p1.setCoeff(9,1);
    p1.setCoeff(7,2);
    p1.setCoeff(5,3);
    p1.setCoeff(3,4);
    p1.setCoeff(4,5);
    p1.print();


}
