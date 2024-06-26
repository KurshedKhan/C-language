#include <stdio.h>

int main(){

    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if (age > 18)
    {
        printf("1.Educated \n2.Non Educated\n");
        printf("Enter your number for above statement\n");
        int num;
        scanf("%d",&num);

        if (num == 1)
        {
            printf("you are valid for vote bcz you are also educated person");
        }
        else{
            printf("you are valid for vote but you are not educated person");
        }
        
    }
    else{
        printf("you are not valid for vote and not educated person.");
    }
    


    return 0;
}