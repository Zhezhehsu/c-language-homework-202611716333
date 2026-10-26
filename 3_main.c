// 202611716333
// 徐思哲

#include <stdio.h>

int main(void) {
    float a, b, c;

    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        return 1;
    }

    if (a > 0.0f && b > 0.0f && c > 0.0f &&
        a + b > c && a + c > b && b + c > a) {
        printf("能构成三角形\n");
    } else {
        printf("不能构成三角形\n");
    }

    return 0;
}