#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x;

    printf("절댓값을 구할 값 : ");
    scanf("%d", &x);
    x = (x > 0) ? x : -x;
    printf("절댓값 : %d\n", x);
    return 0;
}