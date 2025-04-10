# Variables in C Language

A **variable** in C is a **name** given to a memory location that stores data during program execution. Variables are essential to hold values and manipulate them using operations.

---

## 🧠 Why Use Variables?
- To store data values.
- To access and manipulate values during program execution.
- To write dynamic and flexible code.

---

## 🔹 Declaration and Initialization

### 🔸 Declaration Syntax
```c
<datatype> <variable_name>;
```
Example:
```c
int age;
float price;
```

### 🔸 Initialization Syntax
```c
<datatype> <variable_name> = <value>;
```
Example:
```c
int age = 25;
float price = 99.99;
```

---

## 🔍 Rules for Naming Variables
- Must begin with a **letter** (A–Z or a–z) or **underscore (_)**.
- Followed by letters, digits (0–9), or underscores.
- **Case-sensitive** (`num` and `Num` are different).
- Cannot use **keywords** as variable names.

✅ Valid Names: `age`, `_count`, `totalMarks`  
❌ Invalid Names: `2ndNum`, `float`, `total-marks`

---

## 🔹 Types of Variables

| Type           | Description                                      |
|----------------|--------------------------------------------------|
| Local          | Declared inside functions/blocks, accessible only within them |
| Global         | Declared outside all functions, accessible throughout the program |
| Static         | Retains value between function calls             |
| External       | Defined in another file, accessed using `extern` |
| Register       | Stored in CPU register for faster access         |

---

## 🧪 Example Code
```c
#include <stdio.h>

int globalVar = 50; // Global variable

int main() {
    int localVar = 10;  // Local variable

    printf("Global: %d\n", globalVar);
    printf("Local: %d\n", localVar);

    return 0;
}
```

---

## ⚠️ Best Practices
- Use meaningful names (`count`, `totalMarks`) instead of `a`, `x`, etc.
- Initialize variables before using them.
- Choose the right data type for efficient memory usage.

---

