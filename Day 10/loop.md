# Loops and Keywords in C Language

In C programming, **loops** are used to execute a block of code repeatedly until a certain condition is met.

---

## **1. What is a Loop?**
A loop is a control structure that allows the repetition of a block of code multiple times.

### **Types of Loops in C:**
- `for` loop
- `while` loop
- `do-while` loop

---

## **2. for Loop**
The `for` loop is used when the number of iterations is known.

### **Syntax:**
```c
for(initialization; condition; increment/decrement) {
    // code to be executed
}
```

### **Example:**
```c
for(int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```

**Output:**
```
1
2
3
4
5
```

---

## **3. while Loop**
The `while` loop is used when the number of iterations is not known and depends on a condition.

### **Syntax:**
```c
while(condition) {
    // code to be executed
}
```

### **Example:**
```c
int i = 1;
while(i <= 5) {
    printf("%d\n", i);
    i++;
}
```

**Output:**
```
1
2
3
4
5
```

---

## **4. do-while Loop**
The `do-while` loop is similar to `while`, but it executes the code block at least once before checking the condition.

### **Syntax:**
```c
do {
    // code to be executed
} while(condition);
```

### **Example:**
```c
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while(i <= 5);
```

**Output:**
```
1
2
3
4
5
```

---

## **5. break Keyword**
The `break` statement is used to exit from a loop or `switch` statement prematurely.

### **Example:**
```c
for(int i = 1; i <= 5; i++) {
    if(i == 3) {
        break;
    }
    printf("%d\n", i);
}
```

**Output:**
```
1
2
```

---

## **6. continue Keyword**
The `continue` statement skips the current iteration and continues with the next iteration of the loop.

### **Example:**
```c
for(int i = 1; i <= 5; i++) {
    if(i == 3) {
        continue;
    }
    printf("%d\n", i);
}
```

**Output:**
```
1
2
4
5
```

---

These looping constructs and control statements are fundamental for writing efficient and repetitive logic in C programming.

