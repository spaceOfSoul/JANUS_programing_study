#include <stdio.h>

int main() {
    int a = 13;
    int b = 4;
    int c;

    c = a + b;
    printf("a+b = %d\n", c);
    c = a - b;
    printf("a-b = %d\n", c);
    c = a * b;
    printf("a*b = %d\n", c);
    c = a / b;
    printf("a/b = %d\n", c);
    c = a % b;
    printf("a%%b = %d\n", c);
    return 0;
}