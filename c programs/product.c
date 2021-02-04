#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    int num = 1;
    while(n!=0){
        int temp = n%10;
        if(temp==0){
            temp = 5;
        }
        ans += temp*num;
        num *= 10;
        n /=10;
    }
    printf("%d",num);
}
