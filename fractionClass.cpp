class Fraction{

  private:
      int numerator;
      int denominator;

  public:

    //Constructor
    Fraction(int numerator,int denominator){
        this -> numerator = numerator;
        this -> denominator=denominator;
    }

    //Printing Fraction
    void print(){
        cout<<this -> numerator<<" / "<<this -> denominator<<endl;
    }

    //Simplifying fraction
    void simplify(){
        int gcd = 1;
        int j = min(this->numerator,this->denominator);

        for(int i=1;i<=j;i++){
            if(numerator%i==0 && denominator%i==0){
                gcd = i;
            }
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }

    //Add Fraction
    Fraction add(Fraction const &f2){
        int lcm = denominator* f2.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f2.denominator;

        int num = x * this->numerator + (y * f2.numerator);
        Fraction fNew(num,lcm);


        fNew.simplify();
        return fNew;
    }


    // + operator overloading
    Fraction operator+(Fraction const &f2){
        int lcm = denominator* f2.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f2.denominator;

        int num = x * this->numerator + (y * f2.numerator);
        Fraction fNew(num,lcm);


        fNew.simplify();
        return fNew;
    }

    // * operator overloading
    Fraction operator*(Fraction f2){
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        Fraction fNew(n,d);
        fNew.simplify();
        return fNew;
    }

    // Multiply fraction
    void multiply(Fraction const &f2){
        numerator = numerator *f2.numerator;
        denominator = denominator *f2.denominator;

        simplify();
    }

    //Pre-Increment
    Fraction& operator++(){
        numerator = numerator + denominator;
        simplify();
        return *this;
    }

    //Post Increment
    Fraction operator++(int){
        Fraction fNew(numerator,denominator);
        numerator = numerator + denominator;
        simplify();
        fNew.simplify();
        return fNew;
    }

    // += operator overloading
    Fraction& operator+=(Fraction f2){
        int lcm = denominator* f2.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f2.denominator;

        int num = x * this->numerator + (y * f2.numerator);

        numerator = num;
        denominator = lcm;


        simplify();
        return *this;
    }
};
