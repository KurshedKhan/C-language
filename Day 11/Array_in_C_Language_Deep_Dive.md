
## 📘 Arrays in C Language - Deep Dive

### 🧠 What is an Array?
An array is a collection of elements of the **same data type**, stored in **contiguous memory locations**.  
It allows storing **multiple values in a single variable**, instead of declaring separate variables for each value.

---

### 📌 Declaration & Initialization

#### ✅ Declaration:
```c
int arr[5];  // Declares an array of 5 integers
```

#### ✅ Initialization:
```c
int arr[5] = {10, 20, 30, 40, 50};
```

#### ✅ Partial Initialization:
```c
int arr[5] = {10, 20}; // Remaining elements will be 0
```

---

### 📌 Types of Arrays

#### 1️⃣ One-Dimensional Array
```c
int marks[5] = {90, 85, 78, 92, 88};
```

#### 2️⃣ Two-Dimensional Array (Matrix)
```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

#### 3️⃣ Multi-Dimensional Arrays
```c
int cube[2][3][4];  // 3D array
```

---

### 🔁 Accessing Array Elements

```c
printf("%d", arr[2]); // Access 3rd element (index starts from 0)
```

Nested loops are used for 2D and 3D arrays.

---

### 🛠️ Array Input and Output

#### 📥 Input:
```c
for(int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}
```

#### 📤 Output:
```c
for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
```

---

### ⚙️ Common Operations

| Operation     | Description                          |
|---------------|--------------------------------------|
| Traversal     | Visiting each element                |
| Insertion     | Adding element (manual shifting)     |
| Deletion      | Removing element (manual shifting)   |
| Searching     | Finding an element                   |
| Sorting       | Rearranging elements in order        |

---

### 🔍 Example Program - Sum of Array Elements

```c
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum = %d", sum);
    return 0;
}
```

---

### 💡 Key Points

- Arrays are **zero-indexed**.
- The size must be a **constant or macro**.
- Memory is **static** (fixed size).
- Overflowing array bounds leads to **undefined behavior**.

---

### 📋 MCQ Practice

1. What is the index of the first element in an array?
   - A) 0 ✅
   - B) 1
   - C) -1
   - D) Depends on compiler

2. Which of the following is valid array declaration?
   - A) `int arr[] = {1, 2, 3};` ✅
   - B) `int arr(3);`
   - C) `array int arr[5];`
   - D) `int arr{5};`

---

### 🧬 What are Contiguous Memory Locations?

In C, when an array is declared, the compiler allocates **a single block of memory** large enough to hold all the array elements. These elements are stored **next to each other** in memory—this is what we mean by **contiguous memory locations**.

#### 📌 Visual Representation:

Suppose we declare:
```c
int arr[4] = {10, 20, 30, 40};
```

And assume the memory starts from address `1000`. The layout could look like this:

| Element | Value | Memory Address |
|---------|-------|----------------|
| arr[0]  |  10   |     1000       |
| arr[1]  |  20   |     1004       |
| arr[2]  |  30   |     1008       |
| arr[3]  |  40   |     1012       |

➡️ Each `int` takes 4 bytes (depends on system architecture), so elements are spaced 4 bytes apart.

#### ✅ Benefits of Contiguous Allocation:
- 🔁 Easy iteration using loops.
- ⚡ Fast access using index (`arr[i]` is computed as `base_address + i * element_size`).
- 🧠 Predictable layout, which helps in pointer arithmetic.

#### ❗ Important Note:
If memory was not contiguous, accessing elements using indexing would be **slow** and **unpredictable**.


---

## ⚙️ Array Operations in Detail

### 1️⃣ Traversal

**Traversal** means accessing each element of the array one by one.

#### ✅ 1D Array:
```c
for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
```

#### ✅ 2D Array:
```c
for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        printf("%d ", matrix[i][j]);
    }
}
```

#### ✅ 3D Array:
```c
for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        for(int k = 0; k < 4; k++) {
            printf("%d ", cube[i][j][k]);
        }
    }
}
```

---

### 2️⃣ Insertion

**Insertion** means adding a new element at a specific position. In static arrays, this requires shifting elements.

#### ✅ Example (Insert 99 at index 2 in 1D):
```c
int size = 5;
int arr[6] = {10, 20, 30, 40, 50};
int pos = 2;

for(int i = size; i > pos; i--) {
    arr[i] = arr[i - 1];
}
arr[pos] = 99;
size++;
```

❗ 2D/3D arrays typically don't support dynamic insertion without manual memory management.

---

### 3️⃣ Deletion

**Deletion** means removing an element and shifting the rest.

#### ✅ Example (Delete from index 2 in 1D):
```c
int size = 5;
int arr[5] = {10, 20, 30, 40, 50};
int pos = 2;

for(int i = pos; i < size - 1; i++) {
    arr[i] = arr[i + 1];
}
size--;
```

---

### 4️⃣ Searching

**Searching** means finding the index of a target value.

#### ✅ Linear Search (1D):
```c
int key = 30;
for(int i = 0; i < size; i++) {
    if(arr[i] == key) {
        printf("Found at index %d", i);
        break;
    }
}
```

#### ✅ Searching in 2D:
```c
for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        if(matrix[i][j] == key) {
            printf("Found at [%d][%d]", i, j);
        }
    }
}
```

---

### 5️⃣ Sorting

**Sorting** means arranging elements in order.

#### ✅ Bubble Sort (1D):
```c
for(int i = 0; i < size-1; i++) {
    for(int j = 0; j < size-i-1; j++) {
        if(arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
```

> 🧠 Sorting 2D arrays requires flattening or sorting rows individually.

