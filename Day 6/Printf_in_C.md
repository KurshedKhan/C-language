
# 🖨️ `printf()` in C Language

The `printf()` function is used to **print output to the console** in C programming. It is defined in the `stdio.h` header file.

---

## 🧾 Syntax

```c
printf("format string", argument1, argument2, ...);
```

- **"format string"** includes plain text and format specifiers (e.g., `%d`, `%f`, `%c`)
- **arguments** are the values to be printed

---

## ✅ Example

```c
#include <stdio.h>

int main() {
    int age = 25;
    float pi = 3.14;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Value of Pi: %f\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
```

---

## 📋 Common Format Specifiers

| Format | Description        |
|--------|--------------------|
| `%d`   | Integer             |
| `%f`   | Float               |
| `%c`   | Character           |
| `%s`   | String              |
| `%lf`  | Double              |
| `%u`   | Unsigned int        |
| `%x`   | Hex (lowercase)     |
| `%X`   | Hex (uppercase)     |
| `%%`   | Prints a `%` sign   |

---

## 🔍 Tips

- Use `\n` to move to a new line.
- Always match format specifier with correct data type.
- Use `%.2f` to format floating-point numbers (2 decimal places).

---

## ⚠️ Note

- `printf()` does not add a newline automatically. Use `\n` manually.
- Mismatched format specifiers and arguments can cause incorrect output or crashes.

---

