#include <stdio.h>
#include <string.h>
int main(void){
    char name[20];
    char oldname[20];
    printf("Введите имя: ");
    scanf("%s",name);
    printf("Введите фамилию: ");
    scanf("%s", oldname);
    printf("%s %s\n", name, oldname);
    printf("%*d %*d\n", strlen(name), strlen(name), strlen(oldname), strlen(oldname));
    printf("%s %s\n", name, oldname);
    printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(oldname), strlen(oldname));

    return 0;
}
