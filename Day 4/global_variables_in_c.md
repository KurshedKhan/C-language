
# 📘 Global Variables in C

In C, a **global variable** is declared **outside of all functions**, usually at the top of a program file. It is **accessible to all functions** within that file (or others using `extern`).

---

## 🔹 Key Features

- Declared **outside any function**.
- Has **global scope** (visible throughout the program).
- Allocated for the **lifetime of the program**.
- Initialized to **zero** by default (if not explicitly initialized).

---

## ✅ Example

```c
#include <stdio.h>

int globalVar = 10;  // Global variable

void display() {
    printf("Global Variable inside function: %d\n", globalVar);
}

int main() {
    printf("Global Variable in main: %d\n", globalVar);
    display();
    return 0;
}
```

---

## 🔄 Modifying Global Variables

Global variables can be modified by any function:

```c
#include <stdio.h>

int counter = 0;  // Global

void increment() {
    counter++;
}

int main() {
    increment();
    increment();
    printf("Counter: %d\n", counter);  // Output: 2
    return 0;
}
```

---

## ⚠️ Points to Remember

| Point | Description |
|-------|-------------|
| Scope | Entire program |
| Default Value | 0 |
| Lifetime | Till program ends |
| Storage Class | Static by default |
| Risk | Can be changed anywhere—less secure and maintainable |

---

## 🔁 Difference: Local vs Global Variable

| Feature         | Local Variable              | Global Variable               |
|-----------------|-----------------------------|-------------------------------|
| Declared in     | Inside a function           | Outside all functions         |
| Scope           | Only inside that function   | Throughout the program        |
| Lifetime        | During function execution   | Entire program                |
| Default Value   | Garbage value (undefined)   | Zero                          |

---
