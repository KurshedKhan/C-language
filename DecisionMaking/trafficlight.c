#include <stdio.h>


int main(){
    printf("\n=============================\n");

    printf("Traffic light Rules :\n");

    printf("--------------------------------\n");

    printf("Red light = Stop \nYellow light = Carefully \nGreen light = Run :  \n");

    printf("---------------------------------\n");

    printf("Red light = 1 \nYellow light = 2 \nGreen light = 3 :  \n");

    printf("---------------------------------\n");

    printf("Enter your traffic light number :");

    int number;

    scanf("%d",&number);

    if(number == 1){

        printf("Vahicle type : \nNormal vahicle ==> 1 \nPolice vahicle ==> 2 \nAmbulance vahicle ==> 3:\n");
        printf("Enter your vahicle number :");
        scanf("%d",&number);
        if(number == 1){
            printf("you are stop and follow the traffic rules.");
        }
        else if(number == 2){
            printf("Your vahicle type is Police , please give below information.\n");
            printf("Criminal ==> 1 \n Normal ==> 2");
            scanf("%d",&number);
            if(number == 1){
                printf("you can go but carefullly bcz your traffic light is red.");
            }
            else if(number == 2){
                printf("you are stop and follow the traffic rules.");
            }
            else{
                printf("you have entered invalid number for red light and police vahicle.");
            }
        }
        else if(number == 3){
            printf("Your vahicle type is Ambilance , please give below information.\n");
            printf("patient ==> 1 \n Normal ==> 2\n");
            printf("Enter you vahicle condition :");
            scanf("%d",&number);
            if(number == 1){
                printf("you can go but carefullly bcz your traffic light is red.");
            }
            else if(number == 2){
                printf("you are stop and follow the traffic rules.");
            }
            else{
                printf("you have entered invalid number for red light and Ambulance vahicle.");
            }
        }
        else{
            printf("you have entered invalid number , call the traffic police.");
        }
    }

    else if(number == 2){

        printf("you are run but carefully and follow the traffic rules");

    }

    else if(number == 3){

        printf("you are run and follow the traffic rules.");

    }
    else{

        printf("you have entred invalid data and call the traffic police.");

    }
    printf("\n=============================\n");

    return 0;
}