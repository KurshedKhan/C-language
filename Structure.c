#include <stdio.h>

struct student
{
   int roll;
   char name[30];
   int age ;
   char blood[10];

};


int main(){

    struct student st1 = {101 , "Arbaj",21,"AB+"};

    printf("Student Roll No. : %d\n",st1.roll);
    printf("Student Name : %s\n",st1.name);
    printf("Student Age : %d\n",st1.age);
    printf("Student Bloodgroup : %s\n",st1.blood);
   
    

    return 0;
}