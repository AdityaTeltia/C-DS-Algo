#include "Vehicle.h"

class Car:public Vehicle{
    public:
        int numGears;
    Car(int y):Vehicle(y){
        cout<<"Parametrized Car Constructor"<<endl;
    }
    ~Car(){
        cout<<"Car Destructor"<<endl;
    }

};
