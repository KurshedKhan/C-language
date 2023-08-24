#include<stdio.h>

int main(){
    int i,j,temp;
    int a[5]={2,9,6,3,1};
    {
        for(i=0; i<=4; i++){
            for(j=i+1; j<=4; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;   
            }
            
        }

    }
    for(i=0; i<=4; i++){
        printf("%d", a[i]);
    }
    return 0;
}
}