class Complex{

    private:
        int real;
        int imaginary;
    public:
        Complex(int real,int imaginary){
            this -> real = real;
            this -> imaginary = imaginary;
        }

        void print(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }

        void add(Complex c2){
            this -> real = this->real+c2.real;
            this ->imaginary = this->imaginary + c2.imaginary;
        }

        void multiply(Complex c2){
            this -> real = this -> real *(c2.real);
            this ->imaginary = -(this -> imaginary *(c2.imaginary));
        }


};
