#include <stdio.h>

//This structures use padding 

struct std1{

    int roll;
    char class;
};

// This structures use packing
struct std2{

    int rollnumber;
    char class;
}__attribute((packed))__;

int main(){

    printf("Student Roll No. Sizeof : %d\n",sizeof(struct std1));
    printf("Student Class Sizeof : %d",sizeof(struct std2));


    return 0;
}