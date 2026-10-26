// 202611716333
// 徐思哲

#include <stdio.h>

int main(void) {
    float celsius;

    if (scanf("%f", &celsius) != 1) {
        return 1;
    }

    printf("华氏温度 = %.1f\n", celsius * 9.0f / 5.0f + 32.0f);
    return 0;
}