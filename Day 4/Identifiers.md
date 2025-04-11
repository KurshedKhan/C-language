# Identifiers in C Language

## 🔹 What is an Identifier?
An **identifier** is the name used to identify variables, functions, arrays, structures, etc.

## 🔹 Rules for Naming Identifiers
1. Can contain **letters (A-Z, a-z)**, **digits (0-9)**, and **underscores (_)**
2. **Must begin with a letter or underscore** (_)
3. **Cannot start with a digit**
4. **No special characters** allowed (e.g., @, $, #)
5. **Cannot be a C keyword** (like `int`, `while`, `return`)
6. **Case-sensitive** (`Total` and `total` are different)
7. Should be **meaningful** and **readable**

## 🔹 Examples of Valid Identifiers
- `total`
- `num1`
- `_value`
- `StudentName`

## 🔹 Examples of Invalid Identifiers
- `1name`      ❌ (starts with digit)
- `float`      ❌ (keyword)
- `user-name`  ❌ (contains hyphen)
- `#data`      ❌ (contains special character)

## 🔹 Best Practices
- Use meaningful names: `averageScore` instead of `as`
- Use camelCase or underscores: `total_marks`, `studentName`

## 🔹 Keywords vs Identifiers
| Keyword  | Identifier |
|----------|------------|
| `int`    | `marks`    |
| `float`  | `average`  |
| `return` | `sumTotal` |

