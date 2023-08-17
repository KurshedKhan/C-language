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

struct student std1 = {12343,"Nakshatrasingh",12,'D',21,5.8};

void func_struct(){
printf("Student Details :\n name : %s \n Roll No. :%d \n Class : %d \n Section : %c \n Age : %d \n Height : %f\n",std1.Name,std1.rollnumber,std1.Class,std1.section,std1.age,std1.height);

}

int main(){

    func_struct();
    
    return 0;
}