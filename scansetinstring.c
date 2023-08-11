#include <stdio.h>


int main(){

    char str[50];// Declaration of the string.
    printf("Enter the String :");
    scanf("%[^\n]s", str);// Circumflex  symbol == ^


    printf("Name :%s",str);

    return 0;
}