#include<stdio.h>
#include<string.h>
int main()
{
    char a[32],h[10];
    printf("\n\tEnter binary(positive) no. for Hexadecimal conversion: ");
    scanf("%s",&a);
    int l=0,n =strlen(a);

    for(int i=0;i<n;i++)   {a[i]-=48;}

    if(n%4==0)
    {
        for(int i=0;i<n;i+=4,l++)
        { int k= 8*a[i]+4*a[i+1]+2*a[i+2]+a[i+3];

          h[l]= k>10? (k+55):(k+48) ;
        }
     printf("\n\tThe Hexadecimal no. is: %s",h);
    }
    else{printf("\n\tPlease enter the right bianry no.");}


}
