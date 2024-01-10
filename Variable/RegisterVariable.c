#include <stdio.h>


int main(){

    register int Number;
    Number = 10;

    const int MyNumber = 1234567;
    
    printf("Register Variable :%d\n",Number);
    printf("Constant Variable : %d\n",MyNumber);

    return 0;
}