# 📄 C Language Syntax Related Interview Questions (15 with Answers)

---

### 1. ❓ What is the correct syntax to declare a variable in C?

```c
int num;
```

✅ `int` is the data type and `num` is the variable name.

---

### 2. ❓ How do you write a `for` loop in C?

```c
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}
```

✅ This loop prints numbers from 0 to 9.

---

### 3. ❓ What is the syntax for an `if-else` statement?

```c
if (a > b) {
    printf("A is greater");
} else {
    printf("B is greater or equal");
}
```

✅ Standard condition check in C.

---

### 4. ❓ How do you write a function in C?

```c
int add(int a, int b) {
    return a + b;
}
```

✅ A function with return type `int` and two parameters.

---

### 5. ❓ What is the syntax for a switch statement?

```c
switch (choice) {
    case 1: printf("One"); break;
    case 2: printf("Two"); break;
    default: printf("Invalid");
}
```

✅ Used for multiple conditions.

---

### 6. ❓ How to declare and use an array?

```c
int arr[5] = {1, 2, 3, 4, 5};
printf("%d", arr[2]);
```

✅ Arrays use zero-based indexing.

---

### 7. ❓ Syntax for pointer declaration and use?

```c
int x = 10;
int *p = &x;
printf("%d", *p);
```

✅ `*p` accesses the value at the address.

---

### 8. ❓ What is the syntax to define a structure?

```c
struct Student {
    int roll;
    char name[50];
};
```

✅ User-defined data type.

---

### 9. ❓ Syntax for dynamic memory allocation?

```c
int *ptr = (int*)malloc(sizeof(int));
*ptr = 5;
free(ptr);
```

✅ Use `malloc` to allocate and `free` to release.

---

### 10. ❓ How to include header files?

```c
#include <stdio.h>
#include <stdlib.h>
```

✅ These are standard headers.

---

### 11. ❓ Syntax for reading and writing characters?

```c
char ch;
ch = getchar();
putchar(ch);
```

✅ Useful for single character I/O.

---

### 12. ❓ How to read and write strings?

```c
char name[50];
scanf("%s", name);
printf("%s", name);
```

✅ `scanf` reads until a space.

---

### 13. ❓ What is the syntax for a `while` loop?

```c
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}
```

✅ Executes block until condition is false.

---

### 14. ❓ Syntax of `do-while` loop?

```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 5);
```

✅ Executes at least once.

---

### 15. ❓ Syntax for defining constants?

```c
#define PI 3.14
const int MAX = 100;
```

✅ `#define` is a macro; `const` is a constant variable.

---

