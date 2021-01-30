#include<stdio.h>

void main(){
    int savings;
    scanf("%d",&savings);

    if(savings>5000){
        if(savings>10000){
             printf("Road trip with Neha");
        }else{
            printf("Shopping trip with Neha");
        }
    }else if(savings>2000){
        printf("Rashmi");
    }else{
        printf("Friends");
    }
}
