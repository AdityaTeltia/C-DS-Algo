#include<stdio.h>

void main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("%d is the maximum among all", a);
        }else{
            printf("%d is the maximum among all", c);
        }
    }else{
        if(b>c){
            printf("%d is the maximum among all", b);
        }else{
            printf("%d is the maximum among all", c);
        }
    }
}

