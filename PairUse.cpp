#include<iostream>
using namespace std;
#include "Pair.cpp"

int main(){
    Pair<Pair<int,int>,int> p1;

    p1.setY(10);

    Pair<int,int>p4;

    p4.setX(5);
    p4.setY(16);

    p1.setX(p4);

    cout << p1.getX().getX() << " " << p1.getX().getY()<<" "<<p1.getY();


//    Pair<int,double>p1;
//
//    p1.setX(100.34);
//    p1.setY(100.34);
//
//    cout<<p1.getX()<<" "<<p1.getY();
}
