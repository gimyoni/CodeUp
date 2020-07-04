#include<stdio.h>
int main(void)
{
    int a;

    scanf_s("%d", &a);
    printf("%.3f", 9.0 / 5.0*(float)a + 32);

    return 0;
}
