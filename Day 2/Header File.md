# Header Files in C Language

Header files in C contain **function declarations**, **macro definitions**, and **type definitions** that can be shared across multiple source files.

---

## 📁 What is a Header File?
- A file with `.h` extension.
- It allows **code reuse** and **modularity**.
- Commonly included using `#include` directive.

```c
#include <stdio.h>   // Standard header
#include "myfile.h"  // User-defined header
```

---

## 📦 Types of Header Files

### 🔹 1. **Standard Header Files**
- Provided by the C Standard Library.
- Examples:
  - `stdio.h` → Input/output (e.g., `printf`, `scanf`)
  - `stdlib.h` → Memory and process management
  - `string.h` → String handling
  - `math.h` → Math operations (e.g., `sqrt`, `pow`)

### 🔹 2. **User-Defined Header Files**
- Created by programmers to manage large codebases.
- Example:
```c
// mymath.h
int add(int, int);
```
```c
// main.c
#include "mymath.h"
```

---

## ⚙️ How They Work
- During **preprocessing**, the contents of the header file are inserted into the source file.
- This helps avoid rewriting the same code in multiple places.

---

## 🛠️ Example:

### File: `mathutils.h`
```c
int square(int x) {
    return x * x;
}
```

### File: `main.c`
```c
#include <stdio.h>
#include "mathutils.h"

int main() {
    printf("Square of 5 is %d", square(5));
    return 0;
}
```

---

## ✅ Benefits
- Code reusability
- Better organization
- Easier debugging and maintenance

---


