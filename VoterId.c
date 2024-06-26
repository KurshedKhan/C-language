#include <stdio.h>

int main(){

    int age ;
    printf("Enter your age for vote.");
    scanf("%d",&age);


    if (age > 18 || age == 18)
    {
       printf("you are valid for vote."); 
    }

    else{
        printf("you are not valid for vote.");
    }
    

    return 0;
}