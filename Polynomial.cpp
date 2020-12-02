class Polynomial{


    int capacity;

    public:
        int *degreeCoeff;
        Polynomial(){
            degreeCoeff = new int[5];
            capacity = 5;
            for(int i=0;i<5;i++){
                degreeCoeff[i] = 0;
            }
        }

        Polynomial(Polynomial const &p){

            this ->degreeCoeff = new int[capacity];
            for(int i=0;i<capacity;i++){
                this -> degreeCoeff[i] = p.degreeCoeff[i];
            }

            this -> capacity = p.capacity;
        }

        void print(){
            for(int i=0;i<5;i++){
                cout<<degreeCoeff[i]<<"x"<<i<<"+";
            }
        }

        void setCoeff(int element, int index){
            if(index<capacity){
                this -> degreeCoeff[index] = element;
            }else{
                int *newDegreeCoeff  = new int[capacity*2];
                for(int i=0;i<capacity;i++){
                    newDegreeCoeff[i] = degreeCoeff[i];
                }
                delete [] degreeCoeff;
                degreeCoeff = newDegreeCoeff;
                capacity *=2;
            }
            degreeCoeff[index] = element;
        }





};
