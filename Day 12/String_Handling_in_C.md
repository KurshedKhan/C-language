
# 📘 String Handling in C (Beginner to Intermediate)

C does not have a dedicated `string` data type like other languages. Instead, strings are arrays of characters ending with a null character (`\0`).

---

## 🔤 Declaring Strings

```c
char str1[20] = "Hello";
char str2[] = {'W', 'o', 'r', 'l', 'd', '\0'};
```

---

## ✍️ Input and Output

```c
// Using scanf (stops at space)
scanf("%s", str);

// Using fgets (safer, reads full line)
fgets(str, sizeof(str), stdin);

// Printing
printf("%s", str);
puts(str);
```

---

## 📏 1. String Length

### ✅ Using `strlen()`:

```c
#include <string.h>
int len = strlen(str);
```

### 🛠️ Manual Implementation:

```c
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}
```

---

## 📋 2. String Copy

### ✅ Using `strcpy()`:

```c
char dest[100];
strcpy(dest, src);
```

### 🛠️ Manual:

```c
void stringCopy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
```

---

## 🔁 3. String Concatenation

### ✅ Using `strcat()`:

```c
strcat(str1, str2);
```

### 🛠️ Manual:

```c
void stringConcat(char *str1, char *str2) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}
```

---

## 🧪 4. String Comparison

### ✅ Using `strcmp()`:

```c
if (strcmp(str1, str2) == 0) {
    printf("Equal");
}
```

### 🛠️ Manual:

```c
int stringCompare(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) return 0;
        i++;
    }
    return (s1[i] == '\0' && s2[i] == '\0');
}
```

---

## 🔄 5. String Reverse

### 🛠️ Manual:

```c
void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
```

---

## 🔍 6. Search Character in String

```c
void searchChar(char *str, char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character found at index %d\n", i);
            return;
        }
    }
    printf("Character not found.\n");
}
```

---

## 🧠 7. Count Vowels, Consonants, Digits, and Spaces

```c
void analyzeString(char *str) {
    int v=0, c=0, d=0, s=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z')) {
            char ch = tolower(str[i]);
            if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
                v++;
            else
                c++;
        } else if (str[i] >= '0' && str[i] <= '9')
            d++;
        else if (str[i] == ' ')
            s++;
    }
    printf("Vowels: %d, Consonants: %d, Digits: %d, Spaces: %d\n", v, c, d, s);
}
```

---

## 🔧 8. Convert Case

### Lowercase to Uppercase:

```c
void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}
```

---

## ✅ Useful Functions from `<string.h>`

| Function     | Description                     |
|--------------|---------------------------------|
| `strlen()`   | Returns string length           |
| `strcpy()`   | Copies one string to another    |
| `strcat()`   | Concatenates two strings        |
| `strcmp()`   | Compares two strings            |
| `strrev()`   | (Non-standard) Reverse a string |
| `strchr()`   | Find first occurrence of char   |
| `strstr()`   | Find substring                  |

---

