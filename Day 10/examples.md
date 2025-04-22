# 10 Loop Practice Examples in C

These examples help reinforce your understanding of different types of loops in C.

---

### **1. Print numbers from 1 to 10 using for loop**
```c
for(int i = 1; i <= 10; i++) {
    printf("%d\n", i);
}
```

---

### **2. Print even numbers from 2 to 20 using while loop**
```c
int i = 2;
while(i <= 20) {
    printf("%d\n", i);
    i += 2;
}
```

---

### **3. Print odd numbers from 1 to 19 using do-while loop**
```c
int i = 1;
do {
    printf("%d\n", i);
    i += 2;
} while(i < 20);
```

---

### **4. Calculate the sum of numbers from 1 to 100**
```c
int sum = 0;
for(int i = 1; i <= 100; i++) {
    sum += i;
}
printf("Sum: %d\n", sum);
```

---

### **5. Print the multiplication table of a number (e.g., 5)**
```c
int num = 5;
for(int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
}
```

---

### **6. Print factorial of a number (e.g., 5)**
```c
int num = 5, fact = 1;
for(int i = 1; i <= num; i++) {
    fact *= i;
}
printf("Factorial: %d\n", fact);
```

---

### **7. Reverse a number (e.g., 1234)**
```c
int num = 1234, reverse = 0;
while(num != 0) {
    reverse = reverse * 10 + num % 10;
    num /= 10;
}
printf("Reverse: %d\n", reverse);
```

---

### **8. Check if a number is prime**
```c
int num = 7, isPrime = 1;
for(int i = 2; i <= num / 2; i++) {
    if(num % i == 0) {
        isPrime = 0;
        break;
    }
}
if(isPrime && num > 1)
    printf("%d is Prime\n", num);
else
    printf("%d is Not Prime\n", num);
```

---

### **9. Print Fibonacci series up to n terms (e.g., 10)**
```c
int n = 10, a = 0, b = 1, next;
for(int i = 1; i <= n; i++) {
    printf("%d ", a);
    next = a + b;
    a = b;
    b = next;
}
```

---

### **10. Skip printing number 5 using continue**
```c
for(int i = 1; i <= 10; i++) {
    if(i == 5) {
        continue;
    }
    printf("%d\n", i);
}
```

---

These examples provide hands-on practice with loops and logical structures in C. You can modify them for more learning and experimentation!

