#include<stdio.h>

int main(void)
{
    int a, b,c;

    scanf_s("%d", &a);
    b = a / 60;
    c = a % 60;
    printf("%d %d", b,c);

    return 0;
}
