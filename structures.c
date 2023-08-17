#include <stdio.h>
#include <string.h>

struct student{

    int rollnumber;
    char Name[20];
    int Class;
    char section;
    int age;
    float height;

};


int main(){

    struct student std1;

    std1.rollnumber = 10456;
    strcpy(std1.Name,"Nakshatrasingh");
    std1.Class = 12;
    std1.section = 'A';
    std1.age = 21;
    std1.height = 5.8;

    printf("Student Details :\n name : %s \n Roll No. :%d \n Class : %d \n Section : %c \n Age : %d \n Height : %f\n",std1.Name,std1.rollnumber,std1.Class,std1.section,std1.age,std1.height);
 


    return 0;
}