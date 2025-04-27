# C Language Notes: 10 Star (`*`) Patterns

---

## 1. Square Pattern
```c
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        printf("* ");
    }
    printf("\n");
}
```
**Output:**
```
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

---

## 2. Right-Angle Triangle
```c
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n");
}
```
**Output:**
```
*
* *
* * *
* * * *
* * * * *
```

---

## 3. Inverted Right-Angle Triangle
```c
for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n");
}
```
**Output:**
```
* * * * *
* * * *
* * *
* *
*
```

---

## 4. Pyramid Pattern
```c
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++) {
        printf(" ");
    }
    for (int k = 1; k <= (2 * i - 1); k++) {
        printf("*");
    }
    printf("\n");
}
```
**Output:**
```
    *
   ***
  *****
 *******
*********
```

---

## 5. Inverted Pyramid
```c
for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= 5 - i; j++) {
        printf(" ");
    }
    for (int k = 1; k <= (2 * i - 1); k++) {
        printf("*");
    }
    printf("\n");
}
```
**Output:**
```
*********
 *******
  *****
   ***
    *
```

---

## 6. Diamond Pattern
```c
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) printf(" ");
    for (int k = 1; k <= 2 * i - 1; k++) printf("*");
    printf("\n");
}
for (int i = n-1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) printf(" ");
    for (int k = 1; k <= 2 * i - 1; k++) printf("*");
    printf("\n");
}
```
**Output:**
```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

---

## 7. Right-Aligned Triangle
```c
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++) printf(" ");
    for (int k = 1; k <= i; k++) printf("*");
    printf("\n");
}
```
**Output:**
```
    *
   **
  ***
 ****
*****
```

---

## 8. Mirror Inverted Triangle
```c
for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= 5 - i; j++) printf(" ");
    for (int k = 1; k <= i; k++) printf("*");
    printf("\n");
}
```
**Output:**
```
*****
 ****
  ***
   **
    *
```

---

## 9. Hollow Square
```c
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        if (i == 1 || i == 5 || j == 1 || j == 5)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}
```
**Output:**
```
* * * * *
*       *
*       *
*       *
* * * * *
```

---

## 10. Half Diamond Pattern
```c
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) printf("*");
    printf("\n");
}
for (int i = n-1; i >= 1; i--) {
    for (int j = 1; j <= i; j++) printf("*");
    printf("\n");
}
```
**Output:**
```
*
**
***
****
*****
****
***
**
*
```

---

# End of Star Pattern Notes

