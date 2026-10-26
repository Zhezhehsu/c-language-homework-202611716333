// 202611716333
// 徐思哲

#include <stdio.h>

int main(void) {
    float score;

    if (scanf("%f", &score) != 1) {
        return 1;
    }

    if (score < 0.0f || score > 100.0f) {
        printf("输入无效\n");
    } else if (score >= 90.0f) {
        printf("A\n");
    } else if (score >= 80.0f) {
        printf("B\n");
    } else if (score >= 70.0f) {
        printf("C\n");
    } else if (score >= 60.0f) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}