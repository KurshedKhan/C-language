#include <stdio.h>
#include <string.h>

int main(){

    char str[20] = "Nameofstring";

    printf("print the string : \n%s",str);

    int length = 0;
    
    length = strlen(str);

    printf("\nlength of string :%d",length);

    return 0;

}
