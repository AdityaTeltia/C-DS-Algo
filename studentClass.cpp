class Student {

    public:
        int rollNumber;
        int age;

        int totalStudents;
    /*int age;
    public:
    char *name;

    public:
        Student(int age, char *name){
            this->age = age;
            //Shallow Copy
            //this -> name = name;

            //Deep Copy
            this -> name = new char[strlen(name)+1];
            strcpy(this->name,name);
        }
        //Copy Constructor
        Student(Student const &s){//Passing s1 by reference
            this->age = s.age;
            //this -> name = s.name; shallow copy

            //Deep Copy
            this->name = new char[strlen(s.name)+1];
            strcpy(this->name,s.name);
        }

        void display(){
            cout<<name<<" "<<age<<endl;
        }*/

};
