
# C Language Operators – Basic to Advanced

C operators are symbols that perform operations on variables and values.

---

## 🔹 1. Arithmetic Operators

| Operator | Description     | Example        |
|----------|-----------------|----------------|
| `+`      | Addition         | `a + b`        |
| `-`      | Subtraction      | `a - b`        |
| `*`      | Multiplication   | `a * b`        |
| `/`      | Division         | `a / b`        |
| `%`      | Modulus (remainder) | `a % b`   |

---

## 🔹 2. Relational (Comparison) Operators

| Operator | Description         | Example      |
|----------|---------------------|--------------|
| `==`     | Equal to            | `a == b`     |
| `!=`     | Not equal to        | `a != b`     |
| `>`      | Greater than        | `a > b`      |
| `<`      | Less than           | `a < b`      |
| `>=`     | Greater or equal    | `a >= b`     |
| `<=`     | Less or equal       | `a <= b`     |

---

## 🔹 3. Logical Operators

| Operator | Description       | Example              |
|----------|-------------------|----------------------|
| `&&`     | Logical AND       | `(a > 0 && b > 0)`   |
| `||`     | Logical OR        | `(a > 0 || b > 0)`   |
| `!`      | Logical NOT       | `!(a > b)`           |

---

## 🔹 4. Bitwise Operators Not for beginners

| Operator | Description       | Example      |
|----------|-------------------|--------------|
| `&`      | AND               | `a & b`      |
| `|`      | OR                | `a | b`      |
| `^`      | XOR               | `a ^ b`      |
| `~`      | One's complement  | `~a`         |
| `<<`     | Left shift        | `a << 2`     |
| `>>`     | Right shift       | `a >> 2`     |

---

## 🔹 5. Assignment Operators

| Operator | Description               | Example      |
|----------|---------------------------|--------------|
| `=`      | Assign                    | `a = b`      |
| `+=`     | Add and assign            | `a += b`     |
| `-=`     | Subtract and assign       | `a -= b`     |
| `*=`     | Multiply and assign       | `a *= b`     |
| `/=`     | Divide and assign         | `a /= b`     |
| `%=`     | Modulus and assign        | `a %= b`     |

---

## 🔹 6. Unary Operators

| Operator | Description               | Example      |
|----------|---------------------------|--------------|
| `++`     | Increment (pre/post)      | `++a`, `a++` |
| `--`     | Decrement (pre/post)      | `--a`, `a--` |
| `-`      | Negation                  | `-a`         |
| `!`      | Logical NOT               | `!a`         |

---

## 🔹 7. Conditional (Ternary) Operator

```c
(condition) ? true_value : false_value;
```

📌 Example:
```c
int max = (a > b) ? a : b;
```

---

## 🔹 8. Special Operators

| Operator | Description       | Example            |
|----------|-------------------|--------------------|
| `sizeof` | Returns size      | `sizeof(int)`      |
| `&`      | Address of        | `&a`               |
| `*`      | Pointer dereference | `*ptr`           |
| `->`     | Access struct member via pointer | `ptr->name` |
| `.`      | Access struct member | `obj.name`     |
| `,`      | Comma operator     | `a = (1, 2, 3)` → `a = 3` |

---

## ✅ Operator Precedence (Highest to Lowest)

1. `()` `[]` `->` `.`
2. `++` `--` `!` `~` `(type)` `*` `&` `sizeof`
3. `*` `/` `%`
4. `+` `-`
5. `<<` `>>`
6. `<` `<=` `>` `>=`
7. `==` `!=`
8. `&`
9. `^`
10. `|`
11. `&&`
12. `||`
13. `?:`
14. `=`, `+=`, `-=`, etc.
15. `,`

---

## 💡 Tips

- Use parentheses `()` to control precedence.
- Use `sizeof()` to check data type sizes.
- Use `&` and `*` carefully when dealing with pointers.

---

📘 **Practice**:
Write small programs to try each type of operator!
