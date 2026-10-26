// 202611716333
// 徐思哲

#include <stdio.h>

int main(void) {
    float number;

    if (scanf("%f", &number) != 1) {
        return 1;
    }

    if (number > 0.0f) {
        printf("正数\n");
    } else if (number < 0.0f) {
        printf("负数\n");
    } else {
        printf("零\n");
    }

    return 0;
}