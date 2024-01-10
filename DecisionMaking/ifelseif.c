#include <stdio.h>


int main(){

    int age;

    printf("Enter your age :");

    scanf("%d",&age);

    if (age > 18)
    {
       printf("you are eligible for voting .");
    }
    else if (age == 18)
    {
       printf("you are also eligible for voting .");
    }
    else if(age < 18)
    {
        printf("you are not eligible for voting");
    }
    else{
        printf("you are not entered a valid data.");
    }

    return 0;
}