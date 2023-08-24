#include<stdio.h>

int main(){
   int a;
   int count =0;

   printf("enter value for a:");
   scanf("%d", &a);

   while(a>0){
    a=a/10;
    count++;
   }
   printf("%d", count);

   return 0;
}