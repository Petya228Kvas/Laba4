#include <stdio.h>
#include <string.h>
int main(void){

    char name[20];
    printf("Введи имя: ");
    scanf("%s", name);
    int len;
    len = strlen(name)+3;
    printf("a) \"%s\"\n", name);
    printf("б) \"%20s\"\n", name);
    printf("в) \"%-20s\"\n", name);
    printf("г) \"%*s\"\n",len, name);//модификатор, который принимает целое число из дополнительного аргумента

    return 0;
}
