# `scanf` in C - From Basic to Advanced

## 🧠 What is `scanf`?
`scanf` is a standard input function in C used to read formatted input from the user via keyboard.

**Syntax:**
```c
scanf("format_specifier", &variable);
```

---

## 📌 Basic Usage

### 1. Reading an Integer
```c
int num;
scanf("%d", &num);
```

### 2. Reading a Float
```c
float f;
scanf("%f", &f);
```

### 3. Reading a Character
```c
char ch;
scanf(" %c", &ch);  // Note the space before %c
```

### 4. Reading a String
```c
char str[100];
scanf("%s", str);  // No & for string
```

---

## 🧪 Format Specifiers

| Data Type | Format Specifier |
|-----------|------------------|
| int       | %d               |
| float     | %f               |
| double    | %lf              |
| char      | %c               |
| string    | %s               |
| short     | %hd              |
| long      | %ld              |

---

## 🛠️ Intermediate Concepts

### 1. Reading Multiple Inputs
```c
int a, b;
scanf("%d %d", &a, &b);
```

### 2. Skipping Whitespaces (using space or newline)
```c
char c1, c2;
scanf(" %c %c", &c1, &c2);
```

### 3. Suppress Assignment
```c
scanf("%*d %d", &b); // Skips the first number
```

---

## ⚙️ Advanced Usage

### 1. Width Specification
```c
char str[5];
scanf("%4s", str);  // Reads only 4 characters
```

### 2. Character Set
```c
char input[50];
scanf("%[A-Za-z]", input);  // Reads only alphabets
```

### 3. Scanset Negation
```c
scanf("%[^0-9]", str); // Reads until a digit is found
```

### 4. Reading Line with `scanf`
```c
char line[100];
scanf("%[^
]", line);  // Reads until newline
```

---

## 🧯 Common Mistakes

- ❌ Forgetting `&` for non-string types.
- ❌ Not handling newline or buffer issues.
- ❌ Not validating return value of `scanf`.

---

## ✅ Best Practices

- Always check return value:
```c
if (scanf("%d", &x) != 1) {
    // Handle error
}
```
- Use `fgets()` for string input with spaces.
- Clear input buffer when needed.

---

## 📚 Bonus: Clearing Input Buffer
```c
while (getchar() != '\n');
```

---

## 🚀 Example Program

```c
#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your age and name: ");
    scanf("%d", &age);
    getchar();  // to consume leftover newline
    scanf("%[^
]", name);

    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}
```

---
