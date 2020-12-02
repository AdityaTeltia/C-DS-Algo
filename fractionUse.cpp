#include<iostream>
using namespace std;
#include "fractionClass.cpp"

int main(){

    Fraction f1(10,2);
    Fraction f2(5,2);

    (f1 += f2)+=f2;

    f1.print();
    f2.print();

    /*
    Fraction f1(10,2);

    Fraction f2 = f1++;

    f1.print();
    f2.print();


    Fraction f1(10,2);
    f1.print();
    Fraction f3 = ++(++f1);
    f1.print();
    f3.print();
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3 = f1.add(f2);
    Fraction f4 = f1+f2;
    Fraction f5 = f1*f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();
    */
    return 0;
}

