#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    double light_speed = 300000;
    double distance = 149600000;

    double time;
    time = distance/light_speed;

    printf("빛의 속도 %fkm/s\n",light_speed);
    printf("지구와 태양간의 거리 %fkm\n",distance);
    printf("도달 시간 : %fs\n", time);
    return 0;
}