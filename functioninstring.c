#include <stdio.h>


void str_function(char str[]){

        printf("Print the string : %s",str);
}

void main(){

    char str[50] = "string with function";

    str_function(str);

    
}