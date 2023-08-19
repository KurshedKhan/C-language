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

    struct Student_Information  std1 = {10456,12,'A',"com","Nakshatrasingh",21,5.8,"O+"};

    printf("Student Name : %s\n",std1.Details.name);
    printf("Student Section : %c\n",std1.section);

    return 0;
}