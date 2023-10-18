#include <stdio.h>

int main()
{

    printf("Enter a even number 1 to 11 ");
    int x;
    scanf("%d", &x);
    if (x == 2 || x == 4 || x == 6 ||x == 8 ||x == 10 )
    {
        printf("\n===================================\n");
        printf("Enter your age : ");
        int x;
        scanf("%d", &x);
        if (x >= 18)
        {

            printf("you are eligible for voter.");
        }
        else
        {
            printf("you are not eligible for voter.");
        }
    }
    else
    {
        printf("\n============================\n");
        printf("your number is not valid.");
    }

    return 0;
}