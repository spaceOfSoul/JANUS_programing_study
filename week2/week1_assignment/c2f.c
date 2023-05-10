#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    float f;
    printf("화씨온도를 입력해주세요. : ");
    scanf("%f", &f);
    float c = (f - 32) / 1.8;
    printf("섭씨 변환 결과: %f",c);
    return 0;
}