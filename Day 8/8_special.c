#include <stdio.h>

struct Student {
    int age;
};

int main() {
    int x = 10;
    int *ptr = &x;
    struct Student s1 = {20};
    struct Student *sPtr = &s1;

    printf("Address of x: %p\n", &x);
    printf("Value using pointer: %d\n", *ptr);
    printf("Size of int: %lu\n", sizeof(int));
    printf("Access via pointer (->): %d\n", sPtr->age);
    printf("Access via dot (.): %d\n", s1.age);
    return 0;
}