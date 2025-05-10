In C language, CRUD stands for **Create, Read, Update, and Delete** — these are basic operations to manage data, often stored in files or structures.

Here’s a **simple CRUD example using file handling in C** to manage a list of student records.

---

### ✅ Structure of the Program

* **Create**: Add a new student record.
* **Read**: View all student records.
* **Update**: Modify an existing student record by roll number.
* **Delete**: Remove a student record by roll number.

---

### 📁 File Used

We’ll use a file called `students.dat` to store the records.

---

### 👨‍💻 Full C Program for CRUD:

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
    FILE *f = fopen("students.dat", "ab");
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
    printf("Record added successfully.\n");
}

void readRecords() {
    FILE *f = fopen("students.dat", "rb");
    struct Student s;

    printf("\n--- All Student Records ---\n");
    while (fread(&s, sizeof(s), 1, f)) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(f);
}

void updateRecord() {
    FILE *f = fopen("students.dat", "rb+");
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll No to update: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, f)) {
        if (s.roll == roll) {
            printf("Enter New Name: ");
            scanf("%s", s.name);
            printf("Enter New Marks: ");
            scanf("%f", &s.marks);

            fseek(f, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, f);
            found = 1;
            break;
        }
    }

    fclose(f);
    if (found) printf("Record updated.\n");
    else printf("Record not found.\n");
}

void deleteRecord() {
    FILE *f = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, f)) {
        if (s.roll != roll) {
            fwrite(&s, sizeof(s), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(f);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

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

### 🧠 Notes:

* The program uses `fopen`, `fread`, `fwrite`, `fseek`, `remove`, and `rename` for file operations.
* Data is stored in **binary format** for efficiency.
* Use `students.dat` as your working file.

---