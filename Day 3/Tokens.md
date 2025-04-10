# Tokens in C Language

In C programming, **tokens** are the **smallest building blocks** of a program. The compiler breaks down the source code into tokens for analysis and compilation.

---

## 🧱 What is a Token?
- A token is a **smallest individual unit** in a C program.
- Every C statement is made up of one or more tokens.

---

## 🔟 Types of Tokens in C

| Token Type          | Description                                      |
|---------------------|--------------------------------------------------|
| Keywords            | Reserved words like `int`, `return`, `if`       |
| Identifiers         | Names of variables, functions, arrays, etc.     |
| Constants           | Fixed values like numbers or characters          |
| Strings             | Sequence of characters enclosed in quotes        |
| Operators           | Symbols like `+`, `-`, `*`, `=`, etc.            |
| Special Symbols     | Characters like `{}`, `()`, `;`, `#`, etc.       |
| Comments            | Notes written to explain code (`//`, `/* */`)   |

---

## 🔹 1. **Keywords**
Predefined, reserved words with special meaning.
```c
int, float, return, if, else
```

---

## 🔹 2. **Identifiers**
Names given to variables, functions, arrays.
```c
int age; // 'age' is an identifier
```

---

## 🔹 3. **Constants**
Fixed values that do not change.
```c
const int a = 5;
```

---

## 🔹 4. **Strings**
Text enclosed in double quotes.
```c
"Hello, World!"
```

---

## 🔹 5. **Operators**
Used to perform operations on variables and values.
```c
+, -, *, /, %, ==, !=, &&, ||
```

---

## 🔹 6. **Special Symbols**
Used in the syntax and structure of the program.
```c
{ }, ( ), [ ], ; , #
```

---

## 🔹 7. **Comments**
Used to annotate code and are ignored by the compiler.
```c
// Single-line comment
/* Multi-line comment */
```

---

## 🧪 Example Program with Tokens
```c
#include <stdio.h>           // Preprocessor directive

int main() {                 // Keywords + Identifiers + Special Symbols
    int age = 25;            // Keyword + Identifier + Constant + Operator
    printf("Age: %d", age);  // String + Identifier + Special Symbols
    return 0;                // Keyword + Constant
}
```

---

