#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE* employee_file;

    char employee[50];

    employee_file = fopen("employee.c" , "r");

    if(employee_file == NULL){

        printf("File does not exist");

    }
    else{

        printf("File do exist!\n");

        while(fgets(employee , 50 , employee_file) != NULL){

            printf("%s", employee);
            
        }

        fclose(employee_file);
        printf("\nFile open , read , and closed succesfully");
        
    }


    return 0;
}