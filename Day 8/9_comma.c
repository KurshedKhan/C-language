#include <stdio.h>
int main() {
    int a;
    a = (1, 2, 3);
    printf("Value of a: %d\n", a); // Output: 3
    return 0;
}