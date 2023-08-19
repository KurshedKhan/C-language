#include <stdio.h>
#include <string.h>

struct Student_Data{
    int rollnumber;
    int class;
};

int main(){

    struct Student_Data std1 = {10456,12};

    struct Student_Data* ptr_struct = &std1;

    printf("Student Class : %d\n",ptr_struct->class);
    printf("Student Roll No. : %d \n",ptr_struct->rollnumber);


    return 0;
}