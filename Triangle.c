#include <stdio.h>

int TriangleArea(float base ,float height);

int main(){

    float base,height,area;

    printf("Enter your base : ");
    scanf("%f",&base);

    printf("Enter your height : ");
    scanf("%f",&height);


    area =  TriangleArea(base,height);
    printf("Result of area :%f",area);
    
    return 0;
}

int TriangleArea(float base , float height){

    float Area;

    Area = (base*height)/2 ;

    return Area;
}