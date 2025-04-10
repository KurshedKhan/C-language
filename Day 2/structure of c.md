# Structure of a C Program with Examples

Understanding the basic structure of a C program helps in writing correct and organized code.

---

## 🧱 Basic Structure of a C Program

```c
#include <stdio.h>   // 1. Preprocessor Directive

// 2. Main Function\int main() {
    // 3. Variable Declaration
    int num = 10;

    // 4. Output Statement
    printf("Number: %d\n", num);

    // 5. Return Statement
    return 0;
}
```

---

## 🧩 Explanation of Each Part

### 🔹 1. `#include <stdio.h>`
- Preprocessor directive to include standard input/output library.
- Required for using `printf()` and `scanf()`.

### 🔹 2. `int main()`
- Entry point of any C program.
- The `main` function is where program execution starts.

### 🔹 3. Variable Declaration
```c
int num = 10;
```
- Declares an integer variable `num` and assigns it the value `10`.

### 🔹 4. Output Statement
```c
printf("Number: %d\n", num);
```
- Prints the value of `num` to the console.
- `%d` is a format specifier for integers.

### 🔹 5. Return Statement
```c
return 0;
```
- Returns `0` to the operating system indicating successful execution.

---

## 📌 Summary

| Part                    | Description                                 |
|-------------------------|---------------------------------------------|
| `#include`              | Includes libraries                         |
| `main()`                | Main function where execution starts       |
| Variable Declaration    | Defines variables                          |
| `printf()`              | Prints output                              |
| `return 0;`             | Ends the program                           |

---

**Next Topic Suggestion:**  
👉 Header Files in C Language

