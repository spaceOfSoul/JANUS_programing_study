#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int chulsu, younghee, minsu, enji, minchel;
    int result = 0;

    printf("철수의 점수를 입력하시오. : ");
    scanf("%d", chulsu);
    printf("영희의 점수를 입력하시오. : ");
    scanf("%d", younghee);
    printf("민수의 점수를 입력하시오. : ");
    scanf("%d", minsu);
    printf("은지의 점수를 입력하시오. : ");
    scanf("%d", enji);
    printf("민철의 점수를 입력하시오. : ");
    scanf("%d", minchel);

    chulsu = (chulsu >= 70) * chulsu;
    younghee = (younghee >= 70) * younghee;
    minsu = (minsu >= 70) * minsu;
    enji = (enji >= 70) * enji;
    minchel = (minchel >= 70) * minchel;

    result = chulsu + younghee + minsu + enji + minchel;

    printf("합격자 점수의 총합 : %d", result);
    return 0;
}