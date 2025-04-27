# C Language Notes: if-else, switch, and loops (Interview Preparation)

---

## 1. Basic syntax of `if-else`
```c
if (condition) {
    // code if condition is true
} else {
    // code if condition is false
}
```

## 2. Example Output
```c
int a = 10;
if (a > 5)
    printf("Greater");
else
    printf("Smaller");
```
**Output:** `Greater`

## 3. Nested `if-else` Example
```c
if (a > 0) {
    if (a < 100)
        printf("Positive and less than 100");
}
```

## 4. What happens if `break` is omitted in `switch`?
- Fall-through occurs; next cases execute until `break` is found.

## 5. Predict the output
```c
int a = 2;
switch (a) {
    case 1: printf("One");
    case 2: printf("Two");
    case 3: printf("Three");
    default: printf("Default");
}
```
**Output:** `TwoThreeDefault`

## 6. Can `switch` work with float variables?
- **No**, only with **int** or **char** types.

## 7. Loop to print 1 to 5
```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```

## 8. Difference between `while` and `do-while`
- `while` checks condition **before** executing.
- `do-while` executes **at least once**.

## 9. Output prediction
```c
int i = 5;
while (i > 0) {
    printf("%d ", i);
    i--;
}
```
**Output:** `5 4 3 2 1`

## 10. `do-while` loop example
```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 3);
```

## 11. Find the error
```c
for (int i = 0; i < 10; i--)
    printf("%d", i);
```
- Error: `i--` should be `i++`.

## 12. How to exit a loop immediately?
- Use `break;`

## 13. Skipping even numbers using `continue`
```c
for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0)
        continue;
    printf("%d ", i);
}
```

## 14. How many times this loop runs?
```c
for (int i = 0; i <= 5; i += 2)
    printf("%d ", i);
```
- **4 times**: `0, 2, 4`

## 15. Can `default` come first in `switch`?
- **Yes**, but usually kept at the end.

## 16. Can we have an empty `if` block?
- **Yes**, but it's meaningless.

## 17. Predict Output
```c
int x = 10;
if (x == 10)
    printf("Ten\n");
else
    printf("Not Ten\n");
printf("Done");
```
**Output:**
```
Ten
Done
```

## 18. Menu-driven program using `switch`
```c
int choice;
printf("Enter 1 for Hello, 2 for Bye: ");
scanf("%d", &choice);

switch (choice) {
    case 1: printf("Hello\n"); break;
    case 2: printf("Bye\n"); break;
    default: printf("Invalid Choice\n");
}
```

## 19. What is an infinite loop? Example:
```c
while (1) {
    printf("Running\n");
}
```

## 20. `if-else` inside a `for` loop example
```c
for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0)
        printf("%d is Even\n", i);
    else
        printf("%d is Odd\n", i);
}
```

------------------------------------------------
# C Language Interview Notes: If-Else, Switch, Loops

## If-Else

### 1. Basic Syntax
```c
if (condition) {
    // code if true
} else {
    // code if false
}
```

### 2. Output Example
```c
int a = 10;
if (a > 5)
    printf("Greater");
else
    printf("Smaller");
```
**Output:** `Greater`

### 3. Nested If-Else Example
```c
if (a > 0) {
    if (a < 100)
        printf("Positive and less than 100");
}
```

### 4. Break Missing in Switch
- Causes **fall-through** to next cases until a break or end.

## Switch

### 5. Output Example
```c
int a = 2;
switch (a) {
    case 1: printf("One");
    case 2: printf("Two");
    case 3: printf("Three");
    default: printf("Default");
}
```
**Output:** `TwoThreeDefault`

### 6. Switch with Float
- **Not allowed.** Only integers and characters.

## Loops

### 7. Print 1 to 5
```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```

### 8. While vs Do-While
- `while` checks before.
- `do-while` executes at least once.

### 9. Output Example
```c
int i = 5;
while (i > 0) {
    printf("%d ", i);
    i--;
}
```
**Output:** `5 4 3 2 1`

### 10. Do-While Example
```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 3);
```

### 11. Error in Loop
```c
for (int i = 0; i < 10; i--)
    printf("%d", i);
```
**Error:** Should be `i++` not `i--`.

### 12. Exit Loop Immediately
- Use `break;`

### 13. Skip Even Numbers
```c
for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0)
        continue;
    printf("%d ", i);
}
```

### 14. Loop Run Times
```c
for (int i = 0; i <= 5; i += 2)
    printf("%d ", i);
```
**Runs:** 4 times

### 15. Switch with Default First
- **Allowed** but uncommon.

### 16. Empty If Block
```c
if (a == 0) {
    // No code
}
```

### 17. Output Example
```c
int x = 10;
if (x == 10)
    printf("Ten\n");
else
    printf("Not Ten\n");
printf("Done");
```
**Output:**
```
Ten
Done
```

### 18. Menu-Driven Program
```c
int choice;
printf("Enter 1 for Hello, 2 for Bye: ");
scanf("%d", &choice);

switch (choice) {
    case 1: printf("Hello\n"); break;
    case 2: printf("Bye\n"); break;
    default: printf("Invalid Choice\n");
}
```

### 19. Infinite Loop Example
```c
while (1) {
    printf("Running\n");
}
```

### 20. If-Else Inside For Loop
```c
for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0)
        printf("%d is Even\n", i);
    else
        printf("%d is Odd\n", i);
}
```

---

# End of Notes

--------------------------------------------------

