#include <stdio.h>

int main() {
    int a = 13;
    int c;

    c = a++;
    printf("%d\n", c);
    c = ++a;
    printf("%d\n", c);
    c = a--;
    printf("%d\n", c);
    c = --a;
    printf("%d\n", c);
    return 0;
}