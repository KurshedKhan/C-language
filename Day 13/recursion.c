#include <stdio.h>

int factorial(int n); // function declaration

int main()
{

  int size ;
  printf("how many time iteration : ");
  scanf("%d",&size);
  
  for (int i = 0; i < size; i++)
  {
    int value;
    printf("Enter your value for factorial : ");
    scanf("%d", &value);

    int fact = factorial(value);
    printf("Factorial result : %d", fact);
  }

  return 0;
}

int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}