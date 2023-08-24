#include<stdio.h>

int main(){
    int i,sum=0,temp,n;
    printf("enter size of array:\n");
    scanf("%d", &n);
    int a[n];
    printf("enter values:\n");
    for(i=0; i<n; i++){
           scanf("%d",&a[i]);
        }
    {
        for(i=0; i<n; i++){
           temp=a[i];
           sum=sum+temp;

        }
        printf("%d",sum);
    }
    return 0;
}