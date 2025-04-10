# Comments in C Language

Comments in C are used to make code more **readable and understandable**. They are **ignored by the compiler** and do not affect program execution.

---

## 📝 Purpose of Comments
- Explain code logic.
- Improve code readability.
- Help in debugging.
- Provide notes for future reference.

---

## 🔹 Types of Comments in C

### 1. **Single-line Comment**
- Starts with `//`
- Used for short explanations or notes.

```c
int num = 10; // This is a single-line comment
```

---

### 2. **Multi-line Comment**
- Enclosed between `/*` and `*/`
- Can span across multiple lines.

```c
/*
  This is a multi-line comment
  explaining the following block of code
*/
int sum = a + b;
```

---

## ⚠️ Best Practices
- Use comments to explain **why**, not just **what**.
- Avoid over-commenting obvious code.
- Keep comments up-to-date with code changes.

---

## ❌ Incorrect Usage Example
```c
/* Nested comments are not allowed in C
   /* This will cause an error */
*/
```

---

## ✅ Correct Usage Example
```c
#include <stdio.h>

int main() {
    int num = 5;  // Declare a variable

    /*
     Print the variable value
     to the console
    */
    printf("%d", num);

    return 0;
}
```

---

**Next Topic Suggestion:**  
👉 Data Types in C Language