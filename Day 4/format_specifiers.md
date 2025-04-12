# 📘 Format Specifiers in C

Format specifiers are used in C with functions like `printf()` and `scanf()` to specify the **type of data** being handled.

## ✅ Common Format Specifiers

| Format Specifier | Data Type           | Example Value |
|------------------|---------------------|----------------|
| `%d` or `%i`     | int (integer)       | `10`, `-5`     |
| `%f`             | float               | `3.14`, `-2.5` |
| `%lf`            | double              | `10.56`        |
| `%c`             | char (character)    | `'A'`          |
| `%s`             | string              | `"Hello"`      |
| `%u`             | unsigned int        | `20`           |
| `%ld`            | long int            | `1234567890`   |
| `%lu`            | unsigned long int   | `1234567890`   |
| `%x`             | Hexadecimal (lower) | `a`, `1f`      |
| `%X`             | Hexadecimal (upper) | `A`, `1F`      |
| `%o`             | Octal               | `075`          |
| `%p`             | Pointer address     | `0x7ffee1f0`   |
| `%%`             | Percentage symbol   | `%`            |

## 🔁 Examples

```c
#include <stdio.h>

int main() {
    int num = 10;
    float pi = 3.14;
    char ch = 'A';
    char str[] = "Hello";

    printf("Integer: %d\n", num);
    printf("Float: %f\n", pi);
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);

    return 0;
}
