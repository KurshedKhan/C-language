#include<stdio.h>

int main(){
    int i,j,n=5;

    for(i=0; i<=n; i++){
        for(j=0; j<=n-2; j++){
         if( i<=3 && j>=1 && j<=n+i-n){
            printf("*");
         }
         else if(i>=4 && j>=1 && j<=n+1-i ){
            printf("*");
         }
         else{
            printf(" ");
         }
        }
        printf("\n");
    }
    return 0;
}
