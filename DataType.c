#include <stdio.h>

int main(){

    /*
        1. int size ==> 4 Byte ;  formate ==> %d
        2. float size ==> 4 Byte ;  formate ==> %f
        3. char size ==>  1 Byte ;  formate ==> %c
        4. double size ==> 8 Byte ;  formate ==> %lf
        5. long double size ==> 16 Byte ;  formate ==> %Lf
        6. short int size ==> 2 Byte ;  formate ==> %hd
        7. long long int size ==> 8 Byte ;  formate ==> %lld
    
    */

    int x = 10;
    float dec = 3.14;
    char ch = 'c';

   printf("integer size in Byte : %d Byte ;\n",sizeof(x));
   printf("integer size in Byte : %d Byte ;\n",sizeof(dec));
   printf("integer size in Byte : %d Byte ;",sizeof(ch));
    return 0;
}