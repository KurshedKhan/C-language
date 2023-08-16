#include <stdio.h>

void func(int a){

    printf("Print the value %d",a);
}

int main(){
    
    
    void (*ptr_func)(int) = &func;

    // void (*ptr_func)(int) = func;

     (*ptr_func)(10);
    // ptr_func(10);

    return 0;
}
