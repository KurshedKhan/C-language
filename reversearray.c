#include<stdio.h>

int main(){
    int i;
    int a[5]={1,2,3,4,5};
    {
        for(i=4; i>=0; i--){
            printf("%d", a[i]);
        }

}
return 0;
}