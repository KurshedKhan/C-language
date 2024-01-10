#include <stdio.h>

int y = 20; // global variable
void fun(){
    auto int x = 10; // local variable // auto variable
    static int xy = 20; //static variable
    x = x+ 10;
    xy = xy+ 10;
    printf("global variable :%d\n",x);
    printf("Static Variable : %d\n",xy);\
    
}
int main(){  
    fun();
    fun();
    return 0;
}