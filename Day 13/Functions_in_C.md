
# 📘 Functions in C (Basic to Advanced)

Functions are blocks of code designed to perform a particular task. They help in code reusability and modular programming.

---

## 🧩 1. Types of Functions

- **Library Functions**: Built-in functions like `printf()`, `scanf()`, `sqrt()`.
- **User-defined Functions**: Functions created by the programmer.

---

## 🏗️ 2. Syntax of a Function

```c
return_type function_name(parameter_list) {
    // body of the function
}
```

---

## 🧹 3. Function Declaration, Definition, and Calling

```c
// Declaration (Prototype)
int add(int, int);

// Definition
int add(int a, int b) {
    return a + b;
}

// Calling
int result = add(5, 3);
```

---

## 📚 4. Function Without Arguments and Without Return Value

```c
void greet() {
    printf("Hello, World!");
}

int main() {
    greet();
    return 0;
}
```

---

## 📚 5. Function With Arguments and Without Return Value

```c
void greetUser(char name[]) {
    printf("Hello, %s!", name);
}

int main() {
    greetUser("Kurshed");
    return 0;
}
```

---

## 📚 6. Function Without Arguments and With Return Value

```c
int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int n = getNumber();
    printf("You entered %d", n);
    return 0;
}
```

---

## 📚 7. Function With Arguments and With Return Value

```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(4, 5);
    printf("Sum = %d", sum);
    return 0;
}
```

---

## 🔄 8. Recursion (Function Calling Itself)

```c
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    printf("%d", factorial(5)); // Output: 120
    return 0;
}
```

---

## 📥 9. Call by Value vs Call by Reference

### Call by Value (Default in C):

```c
void change(int x) {
    x = 100;
}

int main() {
    int a = 5;
    change(a);
    printf("%d", a); // Output: 5 (no change)
}
```

### Call by Reference (using pointers):

```c
void change(int *x) {
    *x = 100;
}

int main() {
    int a = 5;
    change(&a);
    printf("%d", a); // Output: 100
}
```

---

## 🛠️ 10. Inline Functions (Not directly supported in C, use macros instead)

```c
#define square(x) ((x) * (x))

int main() {
    printf("%d", square(5)); // Output: 25
    return 0;
}
```

---

## 🎯 11. Important Points About Functions

- A function can return only **one value**.
- You can return **multiple values** using **pointers**.
- **Nested functions** (function inside a function) are **not allowed** in C.
- The `main()` function is **also a user-defined function**.

---

## 🧠 12. Advanced Topics (Short Notes)

| Topic                   | Description |
|--------------------------|-------------|
| Recursion                | Function calling itself |
| Static variables in functions | Persist between calls |
| Function pointers        | Pointer pointing to function |
| Passing arrays to functions | Only array address is passed |
| Returning pointer from function | Valid if returning static/local memory |
| Variadic functions       | Functions like `printf` taking variable arguments |

---

# 📌 Common Interview Programs

- Write a program to find factorial using recursion.
- Write a function to reverse a string.
- Write a function to check prime number.

---
