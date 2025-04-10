# Keywords in C Language

Keywords are **reserved words** in C that have **special meanings** to the compiler. These words cannot be used as identifiers (variable names, function names, etc.).

---

## 🧠 What are Keywords?
- Predefined by the C language.
- Always written in **lowercase**.
- Total of **32 keywords** in C.
- Used to perform specific tasks.

---

## 📋 List of All 32 Keywords

```
auto       break      case       char       const      continue
default    do         double     else       enum       extern
float      for        goto       if         int        long
register   return     short      signed     sizeof     static
struct     switch     typedef    union      unsigned   void
volatile   while
```

---

## 🔍 Explanation of Some Common Keywords

| Keyword   | Description                                             |
|-----------|---------------------------------------------------------|
| `int`     | Declares an integer variable                            |
| `float`   | Declares a float variable                               |
| `char`    | Declares a character variable                           |
| `if`      | Used for conditional execution                          |
| `else`    | Used with `if` to define alternative block              |
| `return`  | Exits from a function and returns a value               |
| `void`    | Indicates a function returns nothing                    |
| `for`     | A loop that repeats code a specific number of times     |
| `while`   | A loop that repeats while a condition is true           |
| `do`      | Similar to `while` but executes at least once           |
| `switch`  | Executes different parts based on variable value        |
| `case`    | Defines cases in a `switch` statement                   |
| `break`   | Exits a loop or `switch` block                         |

---

## 🧪 Example Using Keywords

```c
#include <stdio.h>

int main() {
    int num = 10; // 'int' is a keyword

    if (num > 0) {       // 'if' is a keyword
        printf("Positive\n");
    } else {             // 'else' is a keyword
        printf("Non-positive\n");
    }

    return 0; // 'return' is a keyword
}
```

---

## ❌ Important Note
- Do **not** use keywords as variable or function names.
- Example: `int float = 5;` ❌ (invalid)

---


