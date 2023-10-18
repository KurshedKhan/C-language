#include <stdio.h>


int main(){
    printf("\n=====================\n");
    printf("Student Details :\n");
    printf("=====================\n");//semicolon
    char name[30] = "Rajat";
    int rollnumber = 10456;
    char clas[8] = "B.Tech";
    int age = 26;
    float height = 5.8;

    printf("Name of student :%s\n",name);
    printf("Roll Number of Student : %d\n",rollnumber);
    printf("class of Student : %s\n",clas);
    printf("age of Student : %d\n",age);
    printf("height of Student : %f\n",height);

    printf("=====================\n");



    return 0;
}