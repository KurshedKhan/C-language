// printing sum of only odd numbers

#include<stdio.h>

int main(){
    int n;
    printf("enter value for n:");
    scanf("%d", &n);

    int i;
    int sum=0;
    printf("sum of ");
    
    for(i=1; i<=n; i++){
        printf("%d ", i);
        sum=sum+((i*2)-1);
    }
    printf("\n%d", sum);
    return 0;

}