class Vehicle{
    private:
        int maxSpeed;

    protected:
        int numTyres;

    public:
        string color;

        Vehicle(){
            cout<<"Vehicle Default Destructor"<<endl;
        }
        Vehicle(int x){
            cout<<"Vehicle Parametrized constructor"<<endl;
            maxSpeed = x;
        }
        ~Vehicle(){
            cout<<"Vehicle Destructor"<<endl;
        }
};
