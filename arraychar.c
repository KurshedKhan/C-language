#include <stdio.h>

int main(){

    char name[10] = {'R','a','j','a','t','\0'};

    int i = 0;
    while (name[i])
    {
        printf("%c",name[i++]);
    }
    

    return 0;
}