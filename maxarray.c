#include<stdio.h>

int main(){
    int n,i;
   // printf("no. of values:");
    //scanf("%d", &n);
    int a[3]={5,7,3};
    int max=a[0];
    //printf("enter values:");
    //for(i=0; i<n; i++){
      //  scanf("%d", &a[i]);
    //}
    for(i=0; i<3; i++){
        if(a[i]>max){
            max=a[i];
        }
    }printf("%d", max);
    return 0;
}