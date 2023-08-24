#include<stdio.h>

int main(){
int n,i,j;
printf("enter value for n:");
scanf("%d", &n);

for(i=0; i<=n; i++){
    for(j=0; j<=n; j++){
        if(j>=n+1-i){
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