#include <stdio.h>
int main(){

   int n, t, sum = 0, remainder;

   printf("Enter an integer of 5digits\n");
   scanf("%d", &n);
   t = n;

   while (t != 0){
      remainder = t%10;
      sum +=remainder;
      t /= 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}
