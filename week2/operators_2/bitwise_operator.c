#include <stdio.h>

int main() {
    int a = 9, b = 10;
    printf("and 연산. : %d\n", a&b);
    printf("or 연산. : %d\n", a|b);
    printf("xor 연산. : %d\n", a^b);
    printf("not 연산. : %d\n", ~a);
    printf("왼쪽 shift. : %d\n", a << 1);
    printf("오른쪽 shift. : %d\n", a >> 1);
    return 0;
}