# Memory Management in C (Basic to Advanced Level)

Memory management in C language refers to **allocating**, **using**, and **freeing memory** during the program's execution. C gives you **manual control** over memory using different functions and concepts.

---

## ✅ Types of Memory in C

### 1. **Stack Memory**

* Used for **local variables** inside functions.
* Automatically allocated and deallocated.
* Fast but **limited in size**.

### 2. **Heap Memory**

* Used for **dynamic memory allocation**.
* Managed by the programmer using special functions (`malloc`, `calloc`, etc.).
* Slower but **flexible and large**.

### 3. **Code Segment**

* Stores the compiled **code (instructions)** of the program.

### 4. **Data Segment**

* Stores **global/static variables**.

  * Initialized data segment
  * Uninitialized data (BSS) segment

---

## ✅ Memory Allocation Functions

### 1. **malloc()** - Memory Allocation

* Allocates a block of memory but doesn't initialize it.
* Returns a pointer of type `void*`.

```c
int *ptr = (int *) malloc(5 * sizeof(int));
```

### 2. **calloc()** - Contiguous Allocation

* Allocates memory and **initializes to 0**.

```c
int *ptr = (int *) calloc(5, sizeof(int));
```

### 3. **realloc()** - Reallocate Memory

* Resizes a previously allocated block.

```c
ptr = (int *) realloc(ptr, 10 * sizeof(int));
```

### 4. **free()** - Free Allocated Memory

* Releases memory back to the system.

```c
free(ptr);
```

---

## ✅ Example Program Using All Functions

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // malloc
    ptr = (int *) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // realloc
    ptr = (int *) realloc(ptr, 10 * sizeof(int));
    for (int i = 5; i < 10; i++) {
        ptr[i] = i + 1;
    }

    // Display values
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }

    // Free memory
    free(ptr);
    return 0;
}
```

---

## ✅ Common Errors in Memory Management

| Error Type       | Description                                             |
| ---------------- | ------------------------------------------------------- |
| Memory Leak      | Forgetting to free memory.                              |
| Dangling Pointer | Using a pointer after freeing memory.                   |
| Double Free      | Trying to free memory more than once.                   |
| Invalid Free     | Trying to free memory not allocated by `malloc/calloc`. |

---

## ✅ Memory Leak Example

```c
int *ptr = (int *) malloc(100 * sizeof(int));
// forgot to free(ptr);
```

Use tools like **Valgrind** in Linux to detect memory leaks.

---

## ✅ Best Practices

* Always check if malloc/calloc returns NULL.
* Always `free()` the memory when no longer needed.
* Avoid memory leaks and dangling pointers.
* Use tools like Valgrind to analyze runtime memory issues.

---

## ✅ Difference Table: malloc vs calloc vs realloc vs free

| Function | Purpose           | Initializes Memory           | Syntax                  |
| -------- | ----------------- | ---------------------------- | ----------------------- |
| malloc   | Allocate memory   | No                           | malloc(size)            |
| calloc   | Allocate and init | Yes (to 0)                   | calloc(num, size)       |
| realloc  | Resize memory     | No (preserves previous data) | realloc(ptr, new\_size) |
| free     | Deallocate memory | -                            | free(ptr)               |

---

## ✅ Advanced Tips

* Combine structs with dynamic memory:

```c
struct Student {
    char *name;
    int age;
};
struct Student *s = (struct Student *) malloc(sizeof(struct Student));
s->name = (char *) malloc(50 * sizeof(char));
```

* Avoid memory fragmentation by allocating larger blocks when possible.

---

> 🔁 **Summary**: Memory management is a powerful but sensitive aspect in C. Mastering `malloc`, `calloc`, `realloc`, and `free` is essential for safe and efficient programs.
