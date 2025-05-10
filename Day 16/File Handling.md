# 📘 C Language File Handling Notes (Basic to Advanced)

---

## 📂 What is File Handling?

File handling in C allows you to store data permanently in files. It enables reading from and writing to text and binary files.

---

## 📄 Types of Files:

1. **Text Files** (`.txt`) - Human-readable.
2. **Binary Files** (`.dat`, `.bin`) - Machine-readable, faster, stores data in binary format.

---

## 📌 File Operations:

| Function                 | Purpose                            |
| ------------------------ | ---------------------------------- |
| `fopen()`                | Opens a file                       |
| `fclose()`               | Closes a file                      |
| `fgetc()` / `fputc()`    | Reads/Writes a character           |
| `fgets()` / `fputs()`    | Reads/Writes a string              |
| `fprintf()` / `fscanf()` | Reads/Writes formatted data        |
| `fread()` / `fwrite()`   | Reads/Writes binary data           |
| `fseek()`                | Moves file pointer                 |
| `ftell()`                | Returns current file position      |
| `rewind()`               | Sets file pointer to the beginning |

---

## 📘 Modes in `fopen()`

| Mode   | Meaning             |
| ------ | ------------------- |
| `"r"`  | Read (text)         |
| `"w"`  | Write (text)        |
| `"a"`  | Append (text)       |
| `"r+"` | Read + Write (text) |
| `"rb"` | Read (binary)       |
| `"wb"` | Write (binary)      |
| `"ab"` | Append (binary)     |

---

## ✅ Text File Example: Write and Read

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Writing to file
    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello, C File Handling!\n");
    fclose(fp);

    // Reading from file
    fp = fopen("data.txt", "r");
    fgets(data, 100, fp);
    printf("File content: %s", data);
    fclose(fp);
    return 0;
}
```

---

## ✅ Binary File Example: Structure Write and Read

```c
#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s = {1, "Aman", 88.5};

    // Writing binary
    fp = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    // Reading binary
    fp = fopen("student.dat", "rb");
    fread(&s, sizeof(s), 1, fp);
    printf("Roll: %d, Name: %s, Marks: %.2f", s.roll, s.name, s.marks);
    fclose(fp);
    return 0;
}
```

---

## ⚙️ Advanced Operations

### 1. `fseek()` Example:

```c
fseek(fp, 0, SEEK_END); // Move to end of file
```

### 2. `ftell()` Example:

```c
long pos = ftell(fp); // Current file pointer position
```

### 3. `rewind()` Example:

```c
rewind(fp); // Go to the beginning of the file
```

---

## 🔐 Error Handling

```c
if (fp == NULL) {
    printf("Error opening file!\n");
    exit(1);
}
```

---

## 📚 Tips:

* Always `fclose()` the file.
* Use `wb/rb` for structures.
* Check for `NULL` pointer after `fopen()`.

---

## 📝 Practice:

1. Write a program to copy content from one file to another.
2. Store multiple student records using binary files.
3. Search for a word in a text file.
4. Count the number of lines and words in a file.

---
