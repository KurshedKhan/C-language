
# 📘 Decision Making in C

C supports the following types of decision-making statements:

---

## 🔹 1. if Statement

```c
if (condition) {
    // code to execute if condition is true
}
```

📌 **Example**:
```c
if (a > 0) {
    printf("Positive number");
}
```

---

## 🔹 2. if...else Statement

```c
if (condition) {
    // true block
} else {
    // false block
}
```

📌 **Example**:
```c
if (a % 2 == 0) {
    printf("Even");
} else {
    printf("Odd");
}
```

---

## 🔹 3. Nested if Statement

```c
if (condition1) {
    if (condition2) {
        // code
    }
}
```

📌 **Example**:
```c
if (a > 0) {
    if (a < 100) {
        printf("Between 1 and 99");
    }
}
```

---

## 🔹 4. if...else if...else Ladder

```c
if (condition1) {
    // block1
} else if (condition2) {
    // block2
} else {
    // default block
}
```

📌 **Example**:
```c
if (marks >= 90) {
    printf("Grade A");
} else if (marks >= 75) {
    printf("Grade B");
} else if (marks >= 50) {
    printf("Grade C");
} else {
    printf("Fail");
}
```

---

## ✅ Tips

- Conditions must return true (non-zero) or false (0).
- Always use braces `{}` for clarity.
- Nested ifs should be indented properly for readability.
