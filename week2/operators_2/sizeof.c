#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x;
    double y;
    printf("int 자료형의 크기: %d 바이트\n", sizeof(int));
    printf("x의 크기: %d 바이트\n", sizeof(x));
    printf("double 자료형의 크기: %d 바이트\n", sizeof(double));
    printf("y의 크기: %d 바이트\n", sizeof(y));
    return 0;
}