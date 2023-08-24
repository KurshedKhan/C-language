#include<stdio.H>

int main(){
    int a, r;

    printf("enter radius of circle:");
    scanf("%d", &r);

    a=3.14*r*r;

    printf("area of circle is %d", a);

   return 0;
}