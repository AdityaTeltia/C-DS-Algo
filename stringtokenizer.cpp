#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *s ,char delim){
    //string and single char acts as a delimiter

    static char*input = NULL;


}

int main(){

    char s[100]="Today, is a rainy, day";

    char *ptr = mystrtok(s,' ');
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr=mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }
    return 0;
}
