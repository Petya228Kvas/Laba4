#include <stdio.h>
#define BITS 8
int main(void){

    float mb_s;
    float size_file;
    printf("Введите скорость загрузки в мегабитах в секунду: ");
    scanf("%f", &mb_s);
    printf("Введите размер файла в мегабайтах: ");
    scanf("%f",&size_file);
    float Mb_s;
    Mb_s = mb_s / BITS;
    printf("При скорости загрузки %.2f мегабит в секунду файл размером %.2f мегабайт\n", mb_s, size_file);
    printf("загружается за %.2f секунд(ы)\n", size_file/Mb_s);

    return 0;
}
