#include <stdio.h>

int main(){


    int n1;
    printf("Enter your first number : ");
    scanf("%d",&n1);


    int n2;
    printf("Enter your second number : ");
    scanf("%d",&n2);

    int add = n1 + n2;
    int sub = n2 - n1;
    int mul = n1 * n2;
    int div = n2/n1;
    int mod = n1%n2;

    printf("Add two number : %d\n",add);
    printf("sub two number : %d\n",sub);
    printf("mul two number : %d\n",mul);
    printf("div two number : %d\n",div);
    printf("module two number : %d\n",mod);


    return 0;
}