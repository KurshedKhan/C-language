#include <stdio.h>


int main(){

    int age,end_point,educated;
    

    printf("Enter your total member ");
    scanf("%d",&end_point);


    for (int  arbaj = 0; arbaj < end_point; arbaj++)
    {
        printf("Enter your age : ");
        scanf("%d",&age);

        if (age >= 18)
        {   
            printf("1.educated and 2.no-educated\n");
            printf("Enter your educated number.");
            scanf("%d",&educated);

           if (educated == 1)
           {
                printf("you are valid for vote because also you educated person\n");
           }
           else{
                printf("you are not valid for vote because you are not educated person.\n");
           }
        }
        else if(age < 18){
            printf("you are not valid for vote.\n");
        }
        else{
            printf("Invalid Data Enter your box, please check it.\n");
        }
        printf("\n==============================");
        printf("\n");
        
    }
    

    return 0;
}