#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct definition
 typedef struct{
    int id;
    char name[50];
    int age;
}Student;

// Function prototypes// declaration
void createStudent();
void readStudents();
void updateStudent();
void deleteStudent();
void menu();

// Constants
#define FILENAME "students.dat"

int main() {
    menu();
    return 0;
}

// Function to create a new student
void createStudent() {
    FILE *file = fopen(FILENAME, "ab");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    Student student;
    printf("Enter ID: ");
    scanf("%d", &student.id);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter Age: ");
    scanf("%d", &student.age);

    fwrite(&student, sizeof(Student), 1, file);
    fclose(file);
    printf("Student added successfully.\n");
}

// Function to read all students
void readStudents() {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    Student student;
    printf("\n%-5s %-20s %-5s\n", "ID", "Name", "Age");
    printf("-------------------------------\n");
    while (fread(&student, sizeof(Student), 1, file)) {
        printf("%-5d %-20s %-5d\n", student.id, student.name, student.age);
    }
    fclose(file);
}

// Function to update a student's information
void updateStudent() {
    FILE *file = fopen(FILENAME, "rb+");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    int id;
    printf("Enter the ID of the student to update: ");
    scanf("%d", &id);

    Student student;
    int found = 0;
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.id == id) {
            printf("Enter new Name: ");
            scanf("%s", student.name);
            printf("Enter new Age: ");
            scanf("%d", &student.age);

            fseek(file, -sizeof(Student), SEEK_CUR);
            fwrite(&student, sizeof(Student), 1, file);
            found = 1;
            break;
        }
    }

    fclose(file);
    if (found) {
        printf("Student updated successfully.\n");
    } else {
        printf("Student with ID %d not found.\n", id);
    }
}

// Function to delete a student
void deleteStudent() {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    int id;
    printf("Enter the ID of the student to delete: ");
    scanf("%d", &id);

    FILE *tempFile = fopen("temp.dat", "wb");
    if (tempFile == NULL) {
        printf("Unable to open temporary file.\n");
        fclose(file);
        return;
    }

    Student student;
    int found = 0;
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.id == id) {
            found = 1;
        } else {
            fwrite(&student, sizeof(Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(FILENAME);
        rename("temp.dat", FILENAME);
        printf("Student deleted successfully.\n");
    } else {
        printf("Student with ID %d not found.\n", id);
    }
}

// Menu function
void menu() {
    int choice;
    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createStudent();
                break;
            case 2:
                readStudents();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
}
