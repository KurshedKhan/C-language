# Storage Classes in C Language (Basic to Advanced)

In C, **storage class** defines the **scope (visibility)**, **lifetime (existence)**, **initial value**, and **memory location** of variables/functions. There are **four** main storage classes in C:

---

## 1. **Automatic Storage Class (`auto`)**

### Description:

* Default storage class for **local variables** inside a function/block.
* Memory is allocated on the **stack**.
* **Lifetime**: Exists until the block/function is active.
* **Scope**: Local to the block/function.
* **Initial Value**: Garbage (undefined).

### Syntax:

```c
void func() {
    auto int a = 5;  // auto is optional
    printf("%d", a);
}
```

---

## 2. **Register Storage Class (`register`)**

### Description:

* Stores variable in **CPU register** (if available), for **faster access**.
* Typically used for **loop counters**.
* Can't get address using `&` operator.

### Syntax:

```c
void func() {
    register int i;
    for(i = 0; i < 10; i++) {
        printf("%d ", i);
    }
}
```

---

## 3. **Static Storage Class (`static`)**

### Description:

* Retains value **between multiple function calls**.
* Memory is allocated in the **data segment**.
* **Lifetime**: Entire program execution.
* Can be used for **global** or **local** variables.

### Syntax:

```c
void counter() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}
```

### Example Output:

```
Count = 1
Count = 2
Count = 3
```

---

## 4. **External Storage Class (`extern`)**

### Description:

* Refers to a **global variable** declared **in another file or location**.
* Used to **share variables** across multiple C files.

### File1.c

```c
int count = 5; // Global definition
```

### File2.c

```c
extern int count; // Declaration
void display() {
    printf("Count is %d", count);
}
```

---

## Comparison Table:

| Storage Class | Scope        | Lifetime       | Default Value   | Keyword  |
| ------------- | ------------ | -------------- | --------------- | -------- |
| auto          | Local        | Within block   | Garbage         | auto     |
| register      | Local        | Within block   | Garbage         | register |
| static        | Local/Global | Entire program | Zero            | static   |
| extern        | Global       | Entire program | Depends on def. | extern   |

---

# Practice Programs

### Program 1: Using `static`

```c
#include <stdio.h>
void display() {
    static int x = 0;
    x++;
    printf("x = %d\n", x);
}
int main() {
    display();
    display();
    display();
    return 0;
}
```

### Program 2: Using `register`

```c
#include <stdio.h>
int main() {
    register int i;
    for(i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    return 0;
}
```

### Program 3: Using `extern`

**File1.c**

```c
#include <stdio.h>
int x = 10; // Global variable
```

**File2.c**

```c
#include <stdio.h>
extern int x; // Refer to File1.c variable
int main() {
    printf("x = %d", x);
    return 0;
}
```

---

# Summary:

* Use `auto` for local variables (default).
* Use `register` for performance-sensitive counters.
* Use `static` to retain values across function calls.
* Use `extern` for accessing global variables in other files.

---

> ✅ **Tip**: Always choose storage class based on how long and where you need the variable and whether it should preserve its value.
