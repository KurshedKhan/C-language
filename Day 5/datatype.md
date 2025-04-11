# Data Types in C Language

In C programming, **data types** specify the type of data a variable can store. Choosing the right data type helps in efficient memory usage and better program performance.

---

## 🧱 Categories of Data Types

### 🔹 1. **Basic (Primitive) Data Types**

| Type     | Description                          | Size       | Format Specifier |
|----------|--------------------------------------|------------|------------------|
| `int`    | Integer numbers                      | 2 or 4 bytes | `%d`             |
| `float`  | Floating-point numbers               | 4 bytes    | `%f`             |
| `double` | Double precision floating numbers    | 8 bytes    | `%lf`            |
| `char`   | Single character                     | 1 byte     | `%c`             |

---

### 🔹 2. **Derived Data Types**
- Formed from basic data types.
- Examples: **Arrays**, **Functions**, **Pointers**

```c
int marks[5];       // Array
int *ptr;           // Pointer
float average();    // Function
```

---

### 🔹 3. **Enumeration (enum)**
- User-defined type that consists of integral constants.
```c
enum week { Mon, Tue, Wed, Thu, Fri };
```

---

### 🔹 4. **Void Type**
- Used for functions that do not return a value.
```c
void greet();  // Function with no return value
```

---

## 🔍 Modifiers in C
Used to alter the size or range of the basic data types.

| Modifier      | Example        | Description                         |
|---------------|----------------|-------------------------------------|
| `short`       | `short int`    | Smaller range of `int`              |
| `long`        | `long int`     | Larger range of `int`               |
| `signed`      | `signed int`   | Can hold both +ve and -ve values    |
| `unsigned`    | `unsigned int` | Only +ve values, doubles upper limit |

---

## 🧪 Example Program
```c
#include <stdio.h>

int main() {
    int a = 10;             // Integer
    float b = 12.5;         // Float
    char c = 'A';           // Character

    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}
```

---

## 🧠 Tips for Choosing Data Types
- Use `int` for counting or indexing.
- Use `float`/`double` for precision numbers.
- Use `char` for single characters.
- Use `unsigned` when negative values aren't needed.

---


