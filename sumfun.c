#include<stdio.h>
    int sum();
    void main()
    {
        int r;
        r=sum();
        printf("%d", r);
    }
    int sum() 
    {
        int a,b,c;
        printf("enter value for a:");
        scanf("%d", &a);
        printf("enter value for b:");
        scanf("%d", &b);
        c=a+b;
        return c;
    }
    
