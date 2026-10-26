// 202611716333
// 徐思哲

#include <stdio.h>

int main() 
{
    float a, b, c;
    printf("请输入三条边长（用空格隔开）：");
    scanf("%f %f %f", &a, &b, &c); 
    if (a + b > c && a + c > b && b + c > a) {
        printf("能构成三角形\n");
    } else {
        printf("不能构成三角形\n");
    }
    
    return 0;
}