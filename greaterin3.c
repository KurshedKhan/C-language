#include<stdio.h>

int main()
{
    int n1, n2, n3;
    printf("enter value for n1:");
    scanf("%d", &n1);

    printf ("enter valur for n2:");
    scanf("%d", &n2);

    printf("enter value for n3:");
    scanf("%d", &n3);
    
    if(n1>n2 && n1>n3){
        printf("n1 is greater");
    }
    if  (n2>n3 && n2>n1)
       { printf("n2 is greater");}

    if (n3>n2 && n3> n1){
        printf("n3 is greater");
    }
    return 0;
    
}