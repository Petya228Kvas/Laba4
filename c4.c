#include <stdio.h>
#define INCHS 12
int main(void){

    char name[20];
    float inch;
    printf("Введите имя: ");
    scanf("%s", name);
    printf("Введите рост в дюймах: ");
    scanf("%f", &inch);
    printf("%s, Ваш рост в футах составляет %.3f", name, inch/INCHS);

    return 0;
}
