//Print sum of n numbers using array and for 

#include<stdio.h>

int main(){
    int n ; 
    int value[n];
    printf("enter number of digits :");
    scanf("%d", &n);

    printf("Enter values for sum:");
    for( int i = 0; i<n; i++){
        
        scanf("%d", &value[i]);
    }

    int sum = 0;

    for(int i=0; i<n; i++){

        sum = sum + value[i];
    };
    
    printf("\nsum=%d", sum);
    return 0;
}