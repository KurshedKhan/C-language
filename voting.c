#include<stdio.h>

int main(){

    int age;
    int edu;
    int mla;

    printf("Enter your age: ");
    scanf("%d", &age);

    if( age >= 35 ){
        printf("1.Educated\t2.Uneducated");
        printf("\n");
        scanf("%d", &edu);

        if( edu == 1){
            printf("1.Ex MLA\t2.Never been a MLA");
            printf("\n");
            scanf("%d", &mla);

            if( mla == 1){
                printf("You are eligible to stand for prime minister");
            }
            else{
                printf("can't be a pm if not a former mla");
            }
        }
        else{
            printf("Uneducated");
        }
    
    }
    else{
        printf("Age less than 35");
    }
    
    return 0;
}