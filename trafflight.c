#include<stdio.h>
int main()
{
   int signal;

   
   printf("enter the signal:");
   scanf("%d",&signal);

   if(signal==1){
    printf("go:%d",signal);
   }
   else{
    printf("stop:%d",signal);
   }

    return 0;
}