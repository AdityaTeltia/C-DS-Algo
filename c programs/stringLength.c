#include<stdio.h>
/*  |_____________________________________|
    |                                     |                                                   |
    |                                     |                                                      |
    |      THIS IS ADITYA TELTIA          |                      |                                                    |
    |                                     |                                                     |
    |_____________________________________| */

int main(){
    char str[100];
    int length;

    printf("Enter a string to calculate its length\n");
    scanf("%s",&str);

    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    printf("Length of the string = %d\n", length);
    return 0;
}
