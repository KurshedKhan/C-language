To generate an **organized Excel-readable file** instead of a binary `.dat` file, you can write the student records in **CSV format** (Comma Separated Values), which can be opened in Excel easily.

Here's the **updated version** of your C code that:

* Saves data in a file named `students.csv`
* Appends new records
* Reads and displays records
* Updates and deletes by rewriting the entire file (since CSV doesn’t allow random access like binary)

---

### ✅ **Updated Code to Use CSV (Excel Compatible)**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void createRecord() {
    FILE *f = fopen("students.csv", "a");
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(f, "%d,%s,%.2f\n", s.roll, s.name, s.marks);
    fclose(f);
    printf("Record added successfully.\n");
}

void readRecords() {
    FILE *f = fopen("students.csv", "r");
    struct Student s;

    printf("\n--- All Student Records ---\n");
    printf("Roll\tName\tMarks\n");

    while (fscanf(f, "%d,%49[^,],%f\n", &s.roll, s.name, &s.marks) == 3) {
        printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
    }

    fclose(f);
}

void updateRecord() {
    FILE *f = fopen("students.csv", "r");
    FILE *temp = fopen("temp.csv", "w");
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll No to update: ");
    scanf("%d", &roll);

    while (fscanf(f, "%d,%49[^,],%f\n", &s.roll, s.name, &s.marks) == 3) {
        if (s.roll == roll) {
            printf("Enter New Name: ");
            scanf("%s", s.name);
            printf("Enter New Marks: ");
            scanf("%f", &s.marks);
            found = 1;
        }
        fprintf(temp, "%d,%s,%.2f\n", s.roll, s.name, s.marks);
    }

    fclose(f);
    fclose(temp);

    remove("students.csv");
    rename("temp.csv", "students.csv");

    if (found) printf("Record updated.\n");
    else printf("Record not found.\n");
}

void deleteRecord() {
    FILE *f = fopen("students.csv", "r");
    FILE *temp = fopen("temp.csv", "w");
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    while (fscanf(f, "%d,%49[^,],%f\n", &s.roll, s.name, &s.marks) == 3) {
        if (s.roll != roll) {
            fprintf(temp, "%d,%s,%.2f\n", s.roll, s.name, s.marks);
        } else {
            found = 1;
        }
    }

    fclose(f);
    fclose(temp);

    remove("students.csv");
    rename("temp.csv", "students.csv");

    if (found) printf("Record deleted.\n");
    else printf("Record not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Create\n2. Read\n3. Update\n4. Delete\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createRecord(); break;
            case 2: readRecords(); break;
            case 3: updateRecord(); break;
            case 4: deleteRecord(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
```

---

### 📌 Output File Example (`students.csv`)

```
1,John,78.50
2,Reena,85.75
3,Amit,92.00
```

You can **open this file directly in Excel**, and it will be organized into columns:

| Roll | Name  | Marks |
| ---- | ----- | ----- |
| 1    | John  | 78.5  |
| 2    | Reena | 85.75 |
| 3    | Amit  | 92.00 |

---

