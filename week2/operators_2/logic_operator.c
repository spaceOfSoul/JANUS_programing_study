#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("and 연산 : %d\n", x&&y);
    printf("or 연산 : %d\n", x||y);
    printf("x not 연산 : %d\n", !x);
    printf("y not 연산 : %d\n", !y);
    return 0;
}