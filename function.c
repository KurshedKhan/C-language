#include <stdio.h>

// int add(int a, int b);

void calculator(int a , int b){
   
    int c = a + b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    
    printf("add two value %d \n",c );
    printf("substraction two value %d \n",d );
    printf("multiple two value %d \n",e );
    printf("division two value %d \n",f );
}
// no argument and no return
void func1(){
        printf("Hello World");
    }

// argument but no return
void func2(int a,int b){
    int c = a + b;
    printf(" %d",c);
} 

// argument and return
int func3(int a , int b){
    return a + b;
}
// no argument but return
int func4(){
    int a = 10;
    int b = 20;
    return a + b;
}
int main(){

    /**
     * function : 
     *             declaration of the function
     *              definition of the function
     *              calling the function
     *  
     * 1.declaration of the function
     * 
     *      return_data_type  function_name(data_type1, data_type2..);
     *      
     *      // out side the entry point
     * 2. definition of the function 
     *      
     *      return_dat_type function_name(data_type1, data_type2){
     *      // statement of the code
     *      if you use int data type then use return keyword
     *      
     *      }
     *      // out of the entry point
    */
    int value1,value2;
    printf("Enter first value for calculating :");
    scanf("%d",&value1);
    printf("Enter second value for calculating :");
    scanf("%d",&value2);

    // calculator(value1,value2);
    printf("\n============================\n");


    func1();
    printf("\n========\n");
    func2(10,20);
    printf("\n========\n");
    int c = func3(10,30);
    printf("%d",c);
     printf("\n========\n");
    int d = func4();
    printf("%d",d);
    return 0;
}