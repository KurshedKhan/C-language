#include <stdio.h>

int main(){
    int height;
    int base;
    
    printf("height of rectangle is:\n ");
    scanf("%d",&height);
    printf("base of rectangle:\n");
    scanf("%d",&base);
    
int area=base*height;
printf("area of rectangle is:%d\n",area);

int perimeter=2*(base*height);
printf("perimeter of rectangle is:%d\n", perimeter);
return 0;
}