// 202611716333
// 徐思哲

#include <stdio.h>

int main() 
{
    float a, b;
    char op; // 格式：字符类型必须用 char
    
    printf("请输入算式：");
    // 格式：%f %c %f，注意 %c 前后要有空格，这样能忽略你输入时的空格
    scanf("%f %c %f", &a, &op, &b); 
    
    // 格式：字符比较，必须用单引号 '+'，不能用双引号！
    if (op == '+') {
        printf("%.2f\n", a + b);
    } 
    else if (op == '-') {
        printf("%.2f\n", a - b);
    } 
    else if (op == '*') {
        printf("%.2f\n", a * b);
    } 
    else if (op == '/') {
        // 格式：嵌套 if，核心保命逻辑
        if (b == 0) {
            printf("错误：除数不能为 0\n");
        } else {
            printf("%.2f\n", a / b);
        }
    } 
    else {
        // 兜底，处理非法符号
        printf("错误：不支持的运算符\n");
    }
    
    return 0;
}