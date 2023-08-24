#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter Value For A:");
    scanf("%d", &a);

    printf("Enter Value For B:");
    scanf("%d", &b);
    
    printf("Values Entered. \n Choose an option: \n 1:Addition \n 2:Subtraction \n 3.Division \n 4.Multiplication\n");
    scanf("%d", &c);

    printf("option number selected is:%d", c);

    if(c==1){
        printf("\nAddition of values are:\n%d + %d = %d",a,b,a+b);
    }
    else if(c==2){
        printf("\nSubtraction of values are:\n%d - %d = %d",a,b, a-b);
    }
    else if(c==3){
        float d=(float)a/b;
        printf("\nDivision result of values are:\n%d/%d = %f",a,b,d);
    }
    else if(c==4){
        printf("\nMultiplying values give:\n%d*%d = %d",a,b, a*b);
    }
    else{
        printf("\nInvalid input\nPlease select valid input and try again");
    }

    printf("\nthank you \nsee ya soon bitch");

    return 0;
}