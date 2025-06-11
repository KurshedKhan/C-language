# Enums in C: Basic to Advanced

## Table of Contents
1. [Introduction to Enums](#1-introduction-to-enums)
2. [Basic Syntax](#2-basic-syntax)
3. [Assigning Values to Enums](#3-assigning-values-to-enums)
4. [Enums with Iteration and Comparison](#4-enums-with-iteration-and-comparison)
5. [Enums with Typedef](#5-enums-with-typedef)
6. [Enums and Macros](#6-enums-and-macros)
7. [Advanced Use Cases](#7-advanced-use-cases)
8. [Best Practices](#8-best-practices)

---

## 1. Introduction to Enums
Enums (enumerations) are user-defined data types in C that allow you to assign names to integral constants. They improve code readability and maintainability.

**Key Features:**
- Group related constants under a single type.
- Values are integers (default starts at `0` and increments by `1`).
- Enums are resolved at compile time.

---

## 2. Basic Syntax
```c
enum enum_name {
    constant1,
    constant2,
    // ...
};
```

**Example:**
```c
enum Weekdays {
    Monday,    // 0
    Tuesday,   // 1
    Wednesday, // 2
    Thursday,  // 3
    Friday,    // 4
    Saturday,  // 5
    Sunday     // 6
};
```

---

## 3. Assigning Values to Enums
You can explicitly assign values to enum constants.

**Example:**
```c
enum StatusCodes {
    OK = 200,
    BadRequest = 400,
    Unauthorized = 401,
    NotFound = 404,
    ServerError = 500
};
```

**Rules:**
- Subsequent constants increment by `1` if not assigned.
- Values can overlap (but not recommended).

---

## 4. Enums with Iteration and Comparison
Enums are integers, so they can be used in loops and comparisons.

**Example:**
```c
enum Colors { Red, Green, Blue, TotalColors };

int main() {
    for (enum Colors c = Red; c < TotalColors; c++) {
        printf("Color ID: %d\n", c);
    }
    return 0;
}
```

---

## 5. Enums with Typedef
Use `typedef` to create an alias for the enum type.

**Example:**
```c
typedef enum {
    LOW,
    MEDIUM,
    HIGH
} PriorityLevel;

PriorityLevel currentPriority = MEDIUM;
```

---

## 6. Enums and Macros
Combine enums with macros for dynamic code generation.

**Example:**
```c
#define PRINT_ENUM(val) printf("%s: %d\n", #val, val)

enum Errors { FileNotFound, PermissionDenied };
PRINT_ENUM(FileNotFound); // Output: FileNotFound: 0
```

---

## 7. Advanced Use Cases

### a. Enum as Bit Flags
Use enums to represent bitmasks for flags:
```c
typedef enum {
    READ = 1 << 0,    // 0b0001
    WRITE = 1 << 1,   // 0b0010
    EXECUTE = 1 << 2  // 0b0100
} FilePermissions;

FilePermissions perm = READ | WRITE; // 0b0011 (3)
```

### b. Enums in Switch-Case
Enums improve readability in `switch` statements:
```c
enum Direction { NORTH, SOUTH, EAST, WEST };

void handleDirection(enum Direction dir) {
    switch (dir) {
        case NORTH: printf("North\n"); break;
        case SOUTH: printf("South\n"); break;
        // ...
    }
}
```

### c. Enums with Structs
Use enums in structs to enforce type safety:
```c
typedef enum { INT, FLOAT, STR } DataType;

struct Data {
    DataType type;
    union {
        int i;
        float f;
        char* s;
    } value;
};
```

### d. Forward Declaration (C11+)
Declare enums before defining them (C11+):
```c
enum Flags; // Forward declaration
void processFlags(enum Flags f);

enum Flags { FLAG_A, FLAG_B };
```

---

## 8. Best Practices
1. **Avoid Magic Numbers:** Use enums instead of arbitrary integers.
2. **Prefix Names:** Prefix enum constants to avoid naming conflicts (e.g., `COLOR_RED`).
3. **Group Related Constants:** Keep related enums in the same scope.
4. **Use `typedef`:** Simplify usage with `typedef`.
5. **Document Values:** Add comments for non-obvious enum assignments.

---

## Summary
- Enums improve code readability by replacing magic numbers.
- They behave like integers but enforce type safety.
- Advanced uses include bitmasks, structs, and macros.
- Always prefer enums over `#define` for grouped constants.
``` 
