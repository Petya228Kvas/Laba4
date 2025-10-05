#include <stdio.h>

int main(void){
    char name[20];
    char oldname[20];
    printf("Введите имя: ");
    scanf("%s", name);
    printf("Введите фамилию: ");
    scanf("%s", oldname);
    printf("Привет %s %s\n", oldname, name);
     
    return 0;
}
