#include <stdio.h>

int main()
{
    char name[20];
    int age;
    char code;
    double key;

    scanf_s("%s", name);
    scanf_s("%d", &age);
    scanf_s(" %c", &code);
    scanf_s("%g", &key);

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%c\n", code);
    printf("%g", key);

    return 0;
}