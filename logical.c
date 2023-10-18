#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;

    // && and operator 
    printf("and operator in c :%d\n",((a<b) && (a>b)));

    printf(" and opertor second %d\n",((a < b ) && ( b > a )));


    // || or oparator 
    printf("or operator in c :%d\n",((a<b) || (a>b)));

    printf(" or opertor second %d\n",((a < b ) || ( b > a )));

    // ! not oparator 
    printf("or operator in c :%d\n",!((a<b) || (a>b)));

    printf(" or opertor second %d\n",(!(a < b ) || ( b > a )));
    
    return 0;
}