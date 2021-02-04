#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num = 1;
    int ans = 0;
    if(n==0){
        printf("%d",5);
    }else{
        while(n!=0){
            int temp = n%10;
            if(temp==0){
                temp = 5;
            }
            ans += temp*num;
            num *= 10;
            n /=10;
        }
        printf("%d",ans);
    }
}
