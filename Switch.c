#include <stdio.h>

int main(){
  int day;
    printf("enter a number for a day : ");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("case 1 is matched");
        break;
    
    case 2:
        printf("case 2 is matched");
        break;
    
    case 3:
        printf("case 3 is matched");
        break;
    
    case 4:
        printf("case 4 is matched");
        break;
    
    case 5:
        printf("case 5 is matched");
        break;
    
    case 6:
        printf("case 6 is matched");
        break;
    
    default:
        printf("your case is not matched");
        break;
    }
    return 0;
}