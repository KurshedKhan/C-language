#include <stdio.h>

struct Student
{
    char name[30];
    int age;
    float height;
    char bloodgroup[4];  
}var;

int main(){
    struct Student st = {"Rajat",27,5.7,"A+"};
    struct Student st2 = {"Pooja",18,5.4,"AB+"};
    printf("Student Details :\n");
    printf("\t\tName : %s , \n \t\tAge :%i , \n \t\tHeight : %f , \n \t\tBloodgroup : %s\n",st.name,st.age,st.height,st.bloodgroup);
    printf("\n========================\n");
    printf("\t\tName : %s , \n \t\tAge :%i , \n \t\tHeight : %f , \n \t\tBloodgroup : %s",st2.name,st2.age,st2.height,st2.bloodgroup);
    return 0;
}