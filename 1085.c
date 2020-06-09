#include <stdio.h>

int main()
{
    int h, b, c, s;
    double result;
    scanf_s("%d %d %d %d", &h, &b, &s, &c);
    result = h * b * c * s / 8;
    result = result / 1024;
    result = result / 1024;
    printf("%.1f MB", result);
    return 0;
}