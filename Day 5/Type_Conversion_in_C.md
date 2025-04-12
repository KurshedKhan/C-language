
# 🔄 Type Conversion in C Language

Type conversion refers to changing the data type of a variable. In C, type conversion is of two types:

---

## 1. ✅ Implicit Type Conversion (Automatic)

C automatically converts **smaller data types to larger data types** when needed.

### 🧠 Rules:
- `char` → `int` → `float` → `double`
- Lower type is promoted to a higher type to avoid data loss.

### 📌 Example:
```c
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    float result = a + b;  // int 'a' is converted to float
    printf("Result: %f", result);
    return 0;
}
```

---

## 2. 🛠️ Explicit Type Conversion (Type Casting)

The programmer manually converts one data type to another using **type casting**.

### 🔧 Syntax:
```c
(type) expression;
```

### 📌 Example:
```c
#include <stdio.h>

int main() {
    float x = 10.75;
    int y = (int)x;  // float to int conversion (decimal part lost)
    printf("After Conversion: %d", y);
    return 0;
}
```

---

## 📋 Common Use-Cases

### 1. Preventing Integer Division:
```c
int a = 5, b = 2;
float result = (float)a / b;  // Result: 2.5 instead of 2
```

### 2. Memory Optimization:
Use smaller types (like `short` or `char`) when you know large range isn’t needed.

```c
short age = (short)25;
```

---

## ⚠️ Note:
- **Implicit conversion** may cause data loss or unexpected behavior.
- Always use **explicit type casting** when mixing types in expressions.
- Be careful when converting from **float to int**, as it will remove the decimal part.

---

Let me know if you want this in **Hindi**, **PDF format**, or with a **flowchart/diagram** for better understanding!
