#include <stdio.h>
#define ONE_GALLON_LITER 3.785
#define ONE_MILE_KILOM 1.609
int main(void){
    float mile;
    float gallon;
    float km, liter;
    float km_on_liter;
    printf("Введите количество пройденных миль: ");
    scanf("%f", &mile);
    printf("Введите количество израсхожанных галлонов: ");
    scanf("%f", &gallon);
    printf("Количество миль пройденных на одном галлоне: %.1f\n", mile/gallon);
    km = mile * ONE_MILE_KILOM;
    printf("KM: %.1f\n", km);
    liter = gallon * ONE_GALLON_LITER;
    printf("LITER: %.1f\n", liter); 
    km_on_liter = liter/km;
    printf("KM/LITER: %.1f\n", km_on_liter);
    printf("Количество литров на 100 км: %.1f\n", km_on_liter*100);
    
    
    return 0;
}
