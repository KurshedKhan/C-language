#include <stdio.h>
#define MAX 50
int main(){
    // String value in single quotes 

    // char str[] = {'R','A','J','A','T','\0'}; // \0 ==> NULL Character

    // printf("Name : %s\n",str);

    // char str1[] = "Rajat";
    // printf("Name : %s",str1);

    // char name[] = "";
    // printf("Enter your name : ");
    // scanf("%[^\n]s",name);
    // printf("This is your name : %s",name);

    char name[MAX];
    printf("Enter your name :");
    
    fgets(name ,MAX, stdin);
    
    puts(name);


    return 0;
}