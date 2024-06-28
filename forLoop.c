#include <stdio.h>

int main(){

    int start;
    printf("Enter your starting number : ");
    scanf("%d",& start);

    int end;
    printf("Enter your starting number : ");
    scanf("%d",& end);

    for (int i = start ; i <= end ;i++)
    {
      if(i % 2 == 0){
        printf("This number is %d even.\n",i);
      }
      else{
        printf("This number is %d odd.\n",i);
      }
    }
    

    return 0;
}