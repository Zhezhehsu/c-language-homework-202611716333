// 202611716333
// 徐思哲

#include <stdio.h>

int main(void) {
    float a, b;
    char operator;

    if (scanf("%f %c %f", &a, &operator, &b) != 3) {
        printf("错误：输入格式不正确\n");
        return 1;
    }

    if (operator == '+') {
        printf("%.2f\n", a + b);
    } else if (operator == '-') {
        printf("%.2f\n", a - b);
    } else if (operator == '*') {
        printf("%.2f\n", a * b);
    } else if (operator == '/') {
        if (b == 0.0f) {
            printf("错误：除数不能为 0\n");
        } else {
            printf("%.2f\n", a / b);
        }
    } else {
        printf("错误：不支持的运算符\n");
    }

    return 0;
}