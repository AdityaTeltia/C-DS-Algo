#include<stdio.h>


int main(){
a:  char c;
    char res;
    int val;
    printf("Enter a Character :");
    scanf("%c",&c);
    getchar();

    val = c;
    printf("Ascii Value : %d\n",val);
    printf("Do you want to find more (Y/N) :");
    scanf("%c",&res);
    getchar();

    if(res == 'Y')goto a;
    else printf("ThankYou");
}
