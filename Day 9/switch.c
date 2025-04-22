#include <stdio.h>

int main(){

  int day;
  printf("Enter your day number 0 to 6 : \n0 = sunday , 1 = monday");
  scanf("%d",&day);

  switch (day)
  {
  case 0:
    printf("Today is : Sun");
    break;
  case 1:
    printf("Today is : Mon");
    break;
  case 2:
    printf("Today is : Tue");
    break;
  case 3:
    printf("Today is : Wed");
    break;
  case 4:
    printf("Today is : Thu");
    break;
  case 5:
    printf("Today is : Fri");
    break;
  
  case 6:
    printf("Today is : Sat");
    break;
  
  default:
    printf("invalid values");
    break;
  }

  return 0;
}