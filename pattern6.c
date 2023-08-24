#include<stdio.h>

int main(){
    int n=4,i,j;
   // printf("enter value for n:");
   // scanf("%d", &n);

    for(i=0; i<=n; i++){
        for(j=0; j<=7; j++){
            if(j>n+1-i && j<n+i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}