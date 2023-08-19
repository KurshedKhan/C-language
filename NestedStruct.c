#include <stdio.h>
#include <string.h>

struct Student_Person_Details{

    char name[20];
    int age ;
    float height ;
    char bloodgroup[10];

};

struct Student_Information{


    int rollnumber ;
    int class ;
    char section;
    char stream[10];

    struct Student_Person_Details Details;
};

int main(){

    struct Student_Information  std1;

    std1.rollnumber = 10456;
    printf("Student Roll No. : %d\n",std1.rollnumber);
    
    std1.class = 12;
    printf("Student Class : %d\n",std1.class);

    std1.Details.age = 21;
    printf("Student Personal Details : %d\n",std1.Details.age);

    strcpy(std1.Details.name,"Nakshatrasingh");
    printf("Student Name : %s\n",std1.Details.name);

    return 0;
}