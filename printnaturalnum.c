#include<stdio.h>

int main(){
    int a;
    int b=0;
    printf("enter value for a:");
    scanf("%d", &a);

    while(b<=a){
      printf("%d", b);
      ++b;
    }
    
    return 0;
}