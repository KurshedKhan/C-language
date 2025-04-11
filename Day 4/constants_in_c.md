
# 📘 Constants in C Language

In C, **constants** are fixed values that do not change during the execution of a program.

---

## 🔹 Types of Constants

### 1. **Integer Constants**
- Whole numbers without a decimal.
- Can be written in:
  - Decimal (e.g., `10`)
  - Octal (e.g., `012`) - starts with `0`
  - Hexadecimal (e.g., `0x1A`) - starts with `0x` or `0X`

```c
int a = 10;
int b = 012;     // Octal
int c = 0x1A;    // Hexadecimal
```

---

### 2. **Floating-point Constants**
- Numbers with a fractional part.
- Can use exponential notation.

```c
float x = 3.14;
double y = 2.5e2;  // 2.5 × 10^2 = 250.0
```

---

### 3. **Character Constants**
- A single character enclosed in single quotes.

```c
char ch = 'A';
```

- Uses ASCII values internally.

---

### 4. **String Constants**
- A sequence of characters enclosed in double quotes.

```c
char str[] = "Hello";
```

---

### 5. **Enumeration Constants**
- User-defined constants using the `enum` keyword.

```c
enum days {SUN, MON, TUE};
```

---

## 🔸 Defining Constants

### ✅ Using `#define` (Preprocessor Directive)

```c
#define PI 3.14159
#define MAX 100
```

- Replaces PI with `3.14159` at compile time.

---

### ✅ Using `const` Keyword

```c
const int maxUsers = 100;
```

- Type-safe and allows scope control.

---

## ⚠️ Difference: `#define` vs `const`

| Feature        | `#define`           | `const`                |
|----------------|---------------------|--------------------------|
| Type checking  | ❌ No               | ✅ Yes                   |
| Scope          | Global              | Scoped (as defined)      |
| Debuggable     | ❌ No               | ✅ Yes                   |

---

## 📝 Example Code

```c
#include <stdio.h>
#define PI 3.14

int main() {
    const int MAX = 100;
    float area;
    int r = 5;

    area = PI * r * r;
    printf("Area = %.2f\n", area);
    return 0;
}
```

---
