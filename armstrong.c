#include<stdio.h>

int main(){
    int a,b,c,d=0;
    printf("enter value for a:");
    scanf("%d", &a);
    c=a;

    while(c>0){
     b=c%10;
     d=(b*b*b)+d;
     c=c/10;
    }
    if(d==a){
        printf("armstrong");
    }
    else{
        printf("not an armstrong");
    }
    return 0;
}