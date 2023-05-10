#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x;

    printf("나이 입력 : ");
    scanf("%d", &x);
    x = (x >= 20) ? printf("성인입니다.") : printf("미성년자입니다.");
    return 0;
}