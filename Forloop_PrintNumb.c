//Print Numbers Using For loop

#include<stdio.h>

int main(){
    int n;
    printf("enter value for n:");
    scanf("%d", &n);

    int i;
    for(i=0; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}