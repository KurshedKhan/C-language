#include <stdio.h>

int main(){

    int size,item;
    printf("Enter your size of our array : ");
    scanf("%d",&size);

    int rollNo[size];

    for(int i = 0 ; i < size ; i++){
        
        printf("Enter your item in your Array : ");
        scanf("%d",&item);
        
        rollNo[i] = item;

    }
    printf("\n==========================\n");
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",rollNo[i]);
    }
    printf(" }");
    printf("\n==========================\n");
    return 0;
}