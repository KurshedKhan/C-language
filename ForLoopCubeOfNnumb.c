//Printing Cube of numbers till N Using For loop

#include<stdio.h>

int main(){
    int n;
    printf("enter value for n:");
    scanf("%d", &n);

    int i;
    //int sum=0;
    for(i=1; i<=n; i++){
        printf("cube of%d is: %d\n", i, i*i*i);
    }
    return 0;
}