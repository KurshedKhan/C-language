#include <stdio.h>


int main(){

    int number = 20; // variable declaration and defination
    number = 10; // initialization

    float Decimal = 3.14;
    Decimal = 5.14;
    Decimal = 6.73;

    /*
        Rule of Variable :
            1.A variable name must only contain alphabets, digits, and underscore.
    */

    int first;
    int second21;
    int First_Second;


    /*
        2.A variable name must start with an alphabet or an underscore only. It cannot start with a digit.

       eg. // int 456number = 40; Wrong way ;
    */

    /*
        3.No whitespace is allowed within the variable name.

       eg. // int First Number = 10; Wrong way;
    */

   /*
        4.A variable name must not be any reserved word or keyword.
        eg. // int float = 10; Wrong way
    */
    
    int number;
    int Number;
    int First_Number;
    int FirstNumber;//camel case
    int _FirstNumber;
    int First56Number;
    int FirstNumber56;
   
    printf("Number :%d\n",number);
    printf("Float Number : %f",Decimal);


    return 0;
}