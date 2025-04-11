# Escape Sequences in C

Escape sequences are used to represent special characters within string literals and character constants in C. They begin with a backslash (`\`) followed by a specific character.

## 🔹 Common Escape Sequences

| Escape Sequence | Description               |
|------------------|---------------------------|
| `\n`             | New line                  |
| `\t`             | Horizontal tab            |
| `\\`             | Backslash (`\`)           |
| `\'`             | Single quote (`'`)        |
| `\"`             | Double quote (`"`)        |
| `\r`             | Carriage return           |
| `\b`             | Backspace                 |
| `\f`             | Form feed                 |
| `\a`             | Alert (beep sound)        |
| `\v`             | Vertical tab              |
| `\0`             | Null character (ASCII 0)  |

## 🔹 Example Code

```c
#include <stdio.h>

int main() {
    printf("Hello\tWorld!\n");
    printf("This is a backslash: \\\n");
    printf("Single quote: \' and Double quote: \"\n");
    printf("Beep sound\a\n"); // May not work on all systems
    return 0;
}
