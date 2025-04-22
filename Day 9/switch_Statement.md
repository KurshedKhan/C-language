# Switch Statement in C Language

The `switch` statement in C is a control statement that allows a variable to be tested for equality against a list of values. Each value is called a **case**, and the variable being switched on is checked for each case.

### **Syntax:**
```c
switch(expression) {
    case value1:
        // code to be executed if expression == value1
        break;
    case value2:
        // code to be executed if expression == value2
        break;
    ...
    default:
        // code to be executed if expression doesn't match any case
}
```

### **Key Points:**
- The `expression` is evaluated once.
- The value of the expression is compared with the values of each `case`.
- If there is a match, the corresponding block of code is executed.
- The `break` statement ends the switch block.
- The `default` case is optional and executes if no match is found.

### **Example:**
```c
#include <stdio.h>

int main() {
    int day = 3;

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
```

### **Output:**
```
Wednesday
```

### **When to Use Switch:**
- When you need to compare a variable against multiple constant values.
- When `if-else` chains become too complex or less readable.

### **Limitations:**
- The `switch` expression must be an integer or character (no strings or floating-point values).
- Each `case` value must be unique.

The `switch` statement is a clean way to handle multiple conditions based on a single variable's value.

