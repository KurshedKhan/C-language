#include <stdio.h>
#define MAX 50

int main(){

    char str[MAX];

    printf("Enter the value");

    fgets(str,MAX,stdin);

    // printf("print the value %s",str);

    // printf("[\n");
    puts(str);
    // printf("]");
    return 0;
}