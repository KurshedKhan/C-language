#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createStudent();
void displayStudent();

struct Student{
  int roll;
  char name[50];
  float marks;
};

int main(){

  int choice;

  while(1){

    printf("1.Create Student \n2.Display Student  \n3.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
      createStudent();
      break;
    case 2 :
      displayStudent();
      break;
    case 3:
      exit(0);
      break;
    default:
      printf("Invalid value.");
      break;
    }
  }
}


void createStudent(){

  FILE *file = fopen("StudentRecord.dat","ab");
  struct Student Std;

  printf("Enter your roll No. : ");
  scanf("%d",&Std.roll);

  printf("Enter your name No. : ");
  scanf("%s",Std.name);
  
  printf("Enter your marks No. : ");
  scanf("%f",&Std.marks);

  fwrite(&Std,sizeof(Std),1,file);
  fclose(file);

  printf("Successfully added a Student.");
  
}

void displayStudent(){
  FILE *file = fopen("StudentRecord.dat","rb");
  struct Student Std;

  if (file == NULL) {
    printf("No record found. Please add student first.\n");
    return;
  }
  printf("========All Student Record=======\n");
  while(fread(&Std,sizeof(Std),1,file)){
    printf("Roll No. : %d Name %s Marks : %.2f\n",Std.roll,Std.name,Std.marks);
  }
  fclose(file);
  printf("Success fully display");
}