#include <stdio.h>

int main(void){

    float num;
    printf("Введите вещественное число: ");;
    scanf("%f", &num);
    printf("а) Вводом является %.1f или %.1e\n", num, num);
    printf("б) Вводом является %+.3f или %.3E\n", num, num);

    return 0;
}
