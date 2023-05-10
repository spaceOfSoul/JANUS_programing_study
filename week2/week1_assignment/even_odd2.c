#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    printf("판별할 숫자 : ");
    scanf("%d", &a);

    printf("판별 결과 : %c",(a%2!=0)*'o'+ (a % 2 == 0) * 'e');
    return 0;
}