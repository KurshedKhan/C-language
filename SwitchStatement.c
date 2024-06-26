#include <stdio.h>


int main(){

    int Day,age;
    printf("Enter your number for days : ");
    scanf("%d",&Day);

    switch (Day)
    {
    case 1:
        printf("Enter your age : ");
        scanf("%d",&age);
        if (age == 18)
        {
            printf("you are also valid for vote.");
        }
        else if (age > 18)
        {
            printf("you are valid for vote.");
        }
        
        else{
            printf("you are not valid for vote");
        }
        
        break;
    case 2:
        printf("2. Tue...!");
        break;
     case 3:
        printf("3. Wed...!");
        break;
     case 4:
        printf("4. Thu...!");
        break;
     case 5:
        printf("5. Fri...!");
        break;
    case 6:
        printf("6. Sat...!");
        break;
    case 7:
        printf("7. Sun...!");
        break;
    default:
        printf("8 to .... invalid number");
        break;
    }


    return 0;
}