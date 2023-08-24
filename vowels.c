#include<stdio.h>

int main(){
    char inp;
    printf("enter character:");
    scanf("%c", &inp);

    if(inp=='a' || inp=='e' || inp=='i' || inp=='o' || inp=='u'){
        printf("vowel");
    }
    else{
        printf("constant");
    }
    return 0;
}