#include<stdio.h>

int main(){
    int age;
    printf("Enter age:\n");
    scanf("%d", &age);

    if(age<=18){
        printf("Not Eligible");
    }
    else if( age>=18 && age<=90){
        printf("Elgibile to vote");
    }
    else{
        printf("shot ur mouth mate no need to vote");
    }
    
    return 0;
    

}