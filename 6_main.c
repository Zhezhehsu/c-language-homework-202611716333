// 202611716333
// 徐思哲

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t value = 0b00001111;
    int weight = 128;
    int i;

    printf("十进制值 = %u\n", (unsigned int)value);
    printf("二进制位 = ");

    for (i = 0; i < 8; i++) {
        int bit = value / weight;

        printf("%d", bit);
        value = (uint8_t)(value - bit * weight);
        weight /= 2;
    }

    printf("\n");
    return 0;
}