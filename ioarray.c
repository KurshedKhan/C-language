#include<stdio.h>

int main(){
    int n;
    printf("Enter no. of values to store:");
    scanf("%d",&n);
    int arr[n];

    printf("enter values for array:");
    for(int i=0; i<n; i++){
        scanf("\n%d", &arr[i]);
    }

    
    for(int i =0; i<n; i++){
        printf("values of array are:%d\n", arr[i]);
    }
    return 0;
}