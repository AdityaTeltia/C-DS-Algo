#include <stdio.h>

int main(){
    int a[] = {2,3,6,1,10,9,12,34,19,20};
    int n = sizeof(a)/sizeof(int);
    int target;
    printf("Enter the number you want to search in array : ");
    scanf("%d",&target);
    int flag = 0;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("NUMBER FOUND");
    }else{
        printf("NUMBER NOT FOUND");
    }
}
