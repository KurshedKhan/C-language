#include<stdio.h>

int main(){

    float radius , volume , surface_area;
    

    printf("Enter radius of sphere: ");

    scanf("%f", &radius);


    surface_area = 4 * 22/7 * radius * radius;

    volume = 4/3 * 22/7 * radius * radius * radius;

    printf("\nSurface area of sphere is:%f", surface_area);
    
    printf("\nVolume of sphere is:%f", volume);

    

    return 0;
}