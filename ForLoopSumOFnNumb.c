//Print Sum of digits till n 

#include<stdio.h>

int main(){
    int n;
    printf("enter value for n:");
    scanf("%d", &n);

    int i;
    int sum=0;
    for(i=0; i<=n; i++){
        sum=sum+i;
        printf("%d", i);
    }
    printf("\nsum=%d", sum);
    return 0;
}