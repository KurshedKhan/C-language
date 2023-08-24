#include<stdio.h>

int main(){
    int a;
    printf("enter light option:\n 1.Red \n 2.Yellow\n 3.Green\n Choose(1-3) \nInput:");
    scanf("%d", &a);
    
    if(a==1){
        printf("Need To Stop!");
    }
    else if(a==2){
        printf("Wait and move Carefully");
    }
    else if(a==3){
        printf("GO!");
    }
    else{
        printf("invalid input");
    }

    return 0;
}